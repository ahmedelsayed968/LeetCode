class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ret;
        vector<int> zeroes;
        for(auto it:nums)
        {
            if(it != 0) ret.push_back(it);
            else zeroes.push_back(it);
        }
        
        if(!zeroes.size()) nums = ret;
        else{
            for(auto it:zeroes)
                ret.push_back(it);
            nums =ret;
        }
    }
};