class Solution {
public:
    vector<int> plusOne(vector<int>& v) {
        int n = v.size();
        int i = n - 1;
        v[i] += 1;  
        while(i >= 0) {
            if (v[i] != 10) return v;  
            v[i] = 0;    
            if (i > 0) v[i - 1] += 1;  
            else v.insert(v.begin(), 1);  
            i--;
        }
        
        return v;
    }
};