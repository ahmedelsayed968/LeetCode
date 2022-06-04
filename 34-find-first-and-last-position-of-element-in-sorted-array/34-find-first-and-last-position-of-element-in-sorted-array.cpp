class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int size = nums.size();
        int low = 0 , high = size-1;
        bool check = false;
        if(size == 1 && nums[0]==target) check = true;
        while(low <= high){
            int mid = (low+high)/2;
            if(nums[mid]==target){
                check = true;
                break;
            }
            else if(nums[mid] > target)
                high = mid-1;
            else
                low = mid+1;
        }
        if(!check) return {-1,-1};

        auto it = lower_bound(nums.begin(),nums.end(),target);
        auto  it2 = upper_bound(nums.begin(),nums.end(),target);

        return {int(it-nums.begin()),int(it2-nums.begin())-1};


    }
};