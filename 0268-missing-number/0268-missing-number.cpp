class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size();
        int actualSum = (size*(size+1))/2;
        int tempSum = 0; 
        for(int i = 0;i<size;i++)
            tempSum += nums[i];
        return actualSum - tempSum;
    }
};