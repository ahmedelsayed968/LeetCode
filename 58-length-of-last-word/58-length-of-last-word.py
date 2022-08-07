class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        ct = 0
        i = -1
        size = len(s)
        while i >= size*-1:
            if(s[i] == ' ' and ct !=0):
                return ct
            elif(s[i]!=' '):
                ct +=1
            i -=1
        return ct    
        
        
        