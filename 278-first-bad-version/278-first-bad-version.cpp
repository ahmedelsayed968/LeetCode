// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long low = 1,high = n;
        long long ret = 0;
        while(low <= high){
            long long mid= (low+high)/2;
            bool check = isBadVersion(mid);
            if(check){
                ret = mid;
                high =mid-1;
            }
            else
                low = mid+1;
        }
        return isBadVersion(ret)?ret:0;
    }
};