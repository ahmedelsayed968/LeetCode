class Solution:
    def canMakeArithmeticProgression(self, arr: List[int]) -> bool:
        # sort first
        # get the abs of arr[0] and arr[1]
        arr.sort()
        init = abs(arr[0]-arr[1])
        i,j=0,1
        size = len(arr)
        while(j < size):
            if(abs(arr[i]-arr[j])!=init):
                return False
            i+=1
            j+=1
            
        return True    
        