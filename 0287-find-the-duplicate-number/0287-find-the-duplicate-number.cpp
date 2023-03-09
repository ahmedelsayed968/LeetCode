class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        return binarySearchApproach(nums);
                
    }
    int binarySearchApproach(vector<int>& nums){
        int start = 1 , end = nums.size();
        int solu = 0;
        while(start <=end){
            int mid = (start+end)/2;
            if(smaller_then_me(mid,nums) > mid){
                solu = mid;
                end= mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return solu;
    }
    int smaller_then_me(int num,vector<int>& nums){
        int count = 0;
        for(auto it:nums)
            if( it <= num) 
                count++;
        return count;
    }
    
};