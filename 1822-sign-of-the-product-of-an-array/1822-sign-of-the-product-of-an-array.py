from copy import deepcopy
class Solution:
    def arraySign(self, nums: List[int]) -> int:
        # sort the list
        # iterate until list[i] > 0
        # if zero flage raised then return 0
        # count the number of negative numbers if even return 1 else -1
        if(0 in nums):
            return 0
        arr = deepcopy(nums)
        arr.sort()
        zero_flage = False
        neg = 0
        for i in arr:
            if(i > 0):
                break
            elif i < 0:
                neg +=1
        
        return 1 if neg%2 == 0 else -1
                
        