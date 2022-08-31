class Solution:
    def finalValueAfterOperations(self, operations: List[str]) -> int:
        count=0
        for i in range(0,len(operations)):
            if operations[i]=="++X" or operations[i]=="X++":
                count=count+1
            if operations[i]=="--X" or operations[i]=="X--":
                count=count-1
        return count
        