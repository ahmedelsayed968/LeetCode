class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        int sum = getMax(nums,0,nums.size()-1);
        
        return sum;

    }
    int getMax(vector<int>& nums,int low,int high){
        // base case
        // if the remaning is one element , so the max sub seq is that element
        if(low > high)
            return 0;
        if(low==high)
            return nums[low];
        
        // divide step
        int mid = low+(high-low)/2;
        // Conquer
        int left = getMax(nums,low,mid);
        int right = getMax(nums,mid+1,high);
        
        // get the max crossing
        long  maxLeftCrossing = INT_MIN,maxRightCrossing =INT_MIN;
        int sum = 0;
        for(int i = mid+1 ; i<= high;i++){
            sum += nums[i];
            maxRightCrossing = maxRightCrossing>sum?maxRightCrossing:sum;
        }
        
        sum = 0;
        for(int i = mid;i>=low;i--){
            sum += nums[i];
            maxLeftCrossing = maxLeftCrossing>sum?maxLeftCrossing:sum;
        }
        int max1 = left>right?left:right;
        long maxCross = (maxLeftCrossing+maxRightCrossing);
        return max1>maxCross?max1:maxCross;

    }

};