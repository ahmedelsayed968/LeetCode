class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // if found return it
        // if not found return lower+1
        int size = nums.size();
        int low = 0 , high = size-1;
        while(low < high ){
            int mid = (low+high)/2;
            if(nums[mid]==target)return mid;
            else if(nums[mid]>target) high =mid-1;
            else
                low = mid+1;
                
        }
        return (nums[low]>=target)?low:low+1;
    }
};