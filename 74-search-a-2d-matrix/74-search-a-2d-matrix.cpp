class Solution {
public:
 bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // if last element in row is greater than the number don't skip --> bs for that row if found --> true if not return false;
        /// if less then go to next row
        // if equal return true
        int sizeRow = matrix[0].size();
        int size  =matrix.size();
        for(int i = 0 ; i <size;++i){
            if(matrix[i].back()== target) return true;
            else if(matrix[i].back() > target){
                // bs
                int bs_ = bs(matrix[i],target,sizeRow);
                if(bs_ != -1) return true;
                return false;
            }


        }
        return false;
    }
    int bs(vector<int> &v,int target,int size){
        int low = 0 , high = size-1;
        while(low <high){
            int mid = (low+high)/2;
            if(v[mid]==target) return mid;
            else if(v[mid] > target) high = mid-1;
            else
                low = mid+1;
        }
        return (v[low]==target)?low:-1;
    }
};