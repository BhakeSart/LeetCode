class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int size = nums.size();
        for(int i=1;i<size;i++)
        {
            if(nums[i]==nums[i-1])
            {
                return nums[i];
            }
        }
        return false;
    }
};