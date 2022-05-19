class Solution {
    map<int,vector<int>> freq;
public:

    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ret;
        int size = nums.size();
        //
//        for (int i = 0; i < size; ++i) {
//            freq[nums[i]].push_back(i);
//        }
        for (int i = 0; i < size; ++i) {
            int diff = target-nums[i];
            for (int j = i+1; j < size; ++j) {
                if(nums[j]==diff){
                    ret.push_back(i);
                    ret.push_back(j);
                    break;
                }
            }

        }
        return ret;
    }
};