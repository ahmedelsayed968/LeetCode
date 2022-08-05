class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        list1 = []
        pro = 1
        sum_ = 0
        list1[:0] = str(n)
        for i in list1:
            digit = int(i)
            sum_ += digit
            pro *= digit
        return pro-sum_    
            