class Solution {
public:
    int minOperations(vector<int>& nums) {
        int size = nums.size();
        if(size==1)
            return 0;
        int ct = 0;
        for(int i = 0;i<size-1;i++){
            if(nums[i] >=nums[i+1]){
                int cal = nums[i]-nums[i+1]+1;
                ct += cal;
                nums[i+1] =nums[i]+1;
            }
            
        }
        return ct;
    }
};