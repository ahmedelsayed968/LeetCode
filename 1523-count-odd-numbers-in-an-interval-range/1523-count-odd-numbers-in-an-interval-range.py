class Solution:
    def countOdds(self, low: int, high: int) -> int:
        if(low%2==0):
            return int(int(high-int(high/2)) - int(low/2))
        else:
            return int(int(high-int(high/2)) - int(low-int(low/2))+1)
        
        