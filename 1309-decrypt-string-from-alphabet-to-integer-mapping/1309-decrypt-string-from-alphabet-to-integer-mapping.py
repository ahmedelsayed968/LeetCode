class Solution:
    def freqAlphabets(self, s: str) -> str:
        size = len(s)
        i = -1
        ret = ""
        while i>= size*-1:
            if s[i]=='#':
                temp = s[i-2]+s[i-1]
                temp = int(temp)-1
                ret += chr(ord('a')+temp)
                i -=3
            else:
                ret += chr(ord('a')+int(s[i])-1)
                i -=1
        return ret[::-1]        
            
        