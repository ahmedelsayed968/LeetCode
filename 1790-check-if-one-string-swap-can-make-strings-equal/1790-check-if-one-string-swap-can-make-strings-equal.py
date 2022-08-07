class Solution:
    def areAlmostEqual(self, s1: str, s2: str) -> bool:
        if s1.__eq__(s2):
            return True
        if len(s1) != len(s2):
            return False
        size = len(s1)
        i = 0
        ct = 0
        map_s1,map_s2 = dict(),dict()
        for char in s1:
            if char in map_s1:
                map_s1[char] +=1
            else:
                map_s1[char] =1
        for char in s2:
            if char in map_s2:
                map_s2[char] +=1
            else:
                map_s2[char] =1
            
        for key,value in map_s1.items():
            if key not in map_s2:
                return False
            if map_s2[key]!= value:
                return False
            
            
        while i < size:
            if s1[i] not in s2:
                print('here')
                return False
            if(s1[i] != s2[i]):
                ct +=1
            i+=1    
        return True if ct==2 else False                
        # ct = 0
        # map_str_1,map_str_2 = dict(),dict()
        # for index,char in enumerate(s1):
        #     if(char not in map_str_1):
        #         map_str_1[char] = list([index])
        #     else:
        #         map_str_1[char].append(index)

        # for index,char in enumerate(s2):
        #     if(char not in map_str_2):
        #         map_str_2[char] = list([index])
        #     else:
        #         map_str_2[char].append(index)
         
        # for key,value in map_str_1.items():
        #     if(key in map_str_2):
        #         if(value not in map_str_2[key]):
        #             ct +=1
        # return True if ct==2 else False      
       