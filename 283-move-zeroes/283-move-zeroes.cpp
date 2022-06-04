class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int check = false;
        int size = nums.size();
        for(int i = 0;i < size;i++){
            if(nums[i] == 0){
                for(int j = i+1;j < size ;j++){
                    if(nums[j]!=0)
                    {
                        swap(nums[i],nums[j]);
                        if(j==size-1) {
                            check = true;
                            break;
                        }
                        break;
                    }
                    
                }
            }
            if(check) break;
        }
        
    }
};