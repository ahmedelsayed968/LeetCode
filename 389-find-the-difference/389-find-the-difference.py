class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        map_str1,map_str2 = dict(),dict()
        for i in s:
            if i in map_str1:
                map_str1[i] +=1
            else:
                map_str1[i] = 1
        
        for i in t:
            if i in map_str2:
                map_str2[i] +=1
            else:
                map_str2[i] = 1
        
        for key,value in map_str2.items():
            if key not in map_str1:
                return key
            else:
                if map_str1[key] != value:
                    return key
        

            