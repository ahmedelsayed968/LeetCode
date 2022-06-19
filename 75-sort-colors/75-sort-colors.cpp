class Solution {
public:
     void sortColors(vector<int>& nums) {
        // NO swap --> return with no need to 2nd or 3rd loop
        bool check = false;
        int size = nums.size();
        int freq[3] = {};
       for(auto it:nums){
           freq[it]++;
       }
       for(int i = 0 ,k=0; i <size ;){
           for(int j = 0 ; j < freq[k];j++)
               nums[i++] = k;
           k++;
       }


    }
};