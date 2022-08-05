class Solution:
    def hammingWeight(self, n: int) -> int:
        p = f'{bin(n)}'
        print(p)
        list1 =[]
        list1[:0] = p
        #ct = 0
        #for i in p:
         #   num = int(i)
          #  if(num==1):
           #     ct +=1
        print(list1)
        return list1.count('1')