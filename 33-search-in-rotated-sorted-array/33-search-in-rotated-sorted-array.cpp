class Solution {
public:
    int search(vector<int>& nums, int target) {
        // assume its already sorted in ascending order without any rotation
        // if rerured the index so the assumption with true else
        // make a custome bs on this case we will check start and mid and end for the target and invert the logic
        int search1 = bs(nums,target);
        if(search1 != -1)
            return search1;
        else{
            int search2 = bs2(nums,target);
            if(search2 !=-1)
                return search2;
            else{
                auto search3 = find(nums.begin(),nums.end(),target);
                if(search3 != nums.end())
                    return search3-nums.begin();
                return -1;
            }
        }



    }


    int peakIndexInMountainArray(vector<int>& arr) {
        // if ar[i-1] < ar[i] && ar[i] < ar[i+1] --> start =miid+1
        // if ar[i-1] > ar[i] && ar[i] < ar[i+1] --> return  mid
        // if ar[i-1] > ar[i] && ar[i] > ar[i+1] --> end = mid;
        int size = arr.size();
        int start = 0 , end = size-1;
        while(start < end){
            int mid = (start+end)/2;
            if(mid-1 >= 0 && arr[mid-1] < arr[mid] && mid+1<size &&arr[mid] > arr[mid+1] ) return mid;
            else if(mid-1 >= 0 && arr[mid-1] <arr[mid] && mid+1<size &&arr[mid] < arr[mid+1]) start = mid+1;
            else if(mid-1 >= 0 && arr[mid-1] >arr[mid] && mid+1<size &&arr[mid] > arr[mid+1]) end =mid;
            if(mid+1 ==size-1 || mid-1==0) break;
        }

        return -1;

    }

    int bs(vector<int> &v,int target){
        int start = 0  , end = v.size()-1;
        while(start <= end){
            int mid = (start+end)/2;

            if(v[mid]==target) return mid;
            if(v[start]==target) return start;
            if(v[end]==target) return end;
            else if(v[mid] > target) end = mid-1;
            else
                start = mid+1;

        }
        return -1;
    }
    int bs2(vector<int> &v,int target){
        int start = 0  , end = v.size()-1;
        while(start <= end){
            int mid = (start+end)/2;
            if(v[mid]==target) return mid;
            if(v[start]==target) return start;
            if(v[end]==target) return end;

            else if(v[mid] > target) start = mid+1;
            else
                start +=1 ;

        }
        return -1;
    }
};