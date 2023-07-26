class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        # cal the product excluding the zero from it
        # cal the count of zeros in the arr
            # if count == 1
            # then all ans[i] =0 but it arr[i] = 0 then this index will equal product without zero
            # if the count > 1
            # then ans = [0]*len(arr)
            # if the count == 0
            # then we can easily divide product by arr[i]
        count = 0
        product = 1
        for item in nums:
            if item == 0:
                count += 1
            else:
                product *= item
        ans = []
        if count > 1:
            return [0] * len(nums)
        elif count == 1:
            for idx,item in enumerate(nums):
                if item == 0:
                    ans.append(product)
                else:
                    ans.append(0)
        else:
            for item in nums:
                to_push = product//item
                ans.append(to_push)
        return ans        