class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> st;
        for(auto it:nums) st.insert(it);
        int res = 1;
        for(int i = 0;i<nums.size();i++)
            if(st.count(res))
                res++;
            else
                return res;
        return res;
    }
};