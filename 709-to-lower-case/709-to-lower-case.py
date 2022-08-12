class Solution:
    def toLowerCase(self, s: str) -> str:
        ret = ""
        for i in s:
            if(i.isupper()):
                ret += i.lower()
            else:
                ret +=i
        return ret