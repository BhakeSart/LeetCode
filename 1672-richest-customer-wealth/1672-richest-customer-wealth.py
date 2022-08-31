class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        res = []
        for i in range(0, len(accounts)):
            res.append(sum(accounts[i]))
        return max(res)
        