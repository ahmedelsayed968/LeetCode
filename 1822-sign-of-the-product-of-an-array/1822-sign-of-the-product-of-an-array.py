from copy import deepcopy
class Solution:
    def arraySign(self, nums: List[int]) -> int:
        # sort the list
        # iterate until list[i] > 0
        # if zero flage raised then return 0
        # count the number of negative numbers if even return 1 else -1
        arr = deepcopy(nums)
        arr.sort()
        zero_flage = False
        neg = 0
        for i in arr:
            if(i > 0):
                break
            elif(i==0):
                zero_flage  = True
            elif i < 0:
                neg +=1
        if(zero_flage == True):
            return 0
            
            
      
        return 1 if neg%2 == 0 else -1
                
        