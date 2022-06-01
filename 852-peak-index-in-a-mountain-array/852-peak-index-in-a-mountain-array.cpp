class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        // if ar[i-1] < ar[i] && ar[i] < ar[i+1] --> start =miid+1
        // if ar[i-1] > ar[i] && ar[i] < ar[i+1] --> return  mid
        // if ar[i-1] > ar[i] && ar[i] > ar[i+1] --> end = mid-1;
        int size = arr.size();
        int start = 0 , end = size-1;
        while(start < end){
            int mid = (start+end)/2;
            if(mid-1 >= 0 && arr[mid-1] < arr[mid] && mid+1<size &&arr[mid] > arr[mid+1] ) return mid;
            else if(mid-1 >= 0 && arr[mid-1] <arr[mid] && mid+1<size &&arr[mid] < arr[mid+1]) start = mid;
            else if(mid-1 >= 0 && arr[mid-1] >arr[mid] && mid+1<size &&arr[mid] > arr[mid+1]) end =mid;
        }
        
        return -1;
         
    }
};