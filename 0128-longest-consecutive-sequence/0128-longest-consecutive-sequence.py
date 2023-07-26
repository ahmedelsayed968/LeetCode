class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        table = set()
        for item in nums:
            table.add(item)
            
        mx = 0
        for item in nums:
            if item-1 not in table:
                # then the item is the start of the sequence
                temp = item
                while temp in table:
                    temp +=1
                mx = max(mx,temp-item)
        return mx
                
        
        