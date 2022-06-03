class Solution {
public:
    int mySqrt(int x) {
        long long  start = 1 , end = x;
        long long  ret = 0;
        if(x == 1) return 1;
        
        while(start < end){
            long long mid = (start+end)/2;
            if(mid*mid == x) return mid;
            else if(mid*mid < x) {
                ret =mid;
                start = mid+1;
            } 
            
            else
                end = mid;
        }
        return ret;
    }
};