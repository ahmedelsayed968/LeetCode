class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> set_;
        for(auto it:nums){
            if(set_.find(it) != set_.end()){
                return  true;
            }
            else
                set_.insert(it);
        }
        return set_.size() != nums.size();
    }
};