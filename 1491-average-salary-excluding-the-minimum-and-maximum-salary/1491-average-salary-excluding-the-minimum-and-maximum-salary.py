class Solution:
    def average(self, salary: List[int]) -> float:
        temp = sorted(salary)
        min_,max_= temp[0],temp[-1]
        len_  = len(temp)
        sum_ = sum(temp) - min_-max_
        return (sum_)/(len_-2)
        