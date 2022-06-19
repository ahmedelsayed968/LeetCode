class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ret;
        int iteration = 2;
        while(iteration--){
            for(auto it:nums)
                ret.push_back(it);
        }
        return ret;
    }
};