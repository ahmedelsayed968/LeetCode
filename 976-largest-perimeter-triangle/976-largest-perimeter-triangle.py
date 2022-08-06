from copy import deepcopy
class Solution:
    def largestPerimeter(self, nums: List[int]) -> int:
        # sort deccending
        # remove zeroes
        # move with three pointers and check if 
        
        size = len(nums)
        list_ = deepcopy(nums)
        list_.sort(reverse=True)
        a,b,c = 0,1,2
        while c < size:
            if(((list_[a]!=0 and list_[b] !=0 and list_[c]!=0)) and (list_[a]+list_[b] > list_[c]) and (list_[a]+list_[c] > list_[b]) and (list_[c]+list_[b] > list_[a])):
                return list_[a]+list_[b]+list_[c]
            a+=1
            b+=1
            c+=1
        return 0    
        