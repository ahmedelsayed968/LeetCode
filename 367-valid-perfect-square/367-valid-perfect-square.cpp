class Solution {
public:
    bool isPerfectSquare(int num) {
     long long start = 1 , end = num;
     while(start < end){
         long long mid = (start+end)/2;
         if(mid*mid==num) return true;
         else if(mid*mid > num) end = mid;
         else
             start = mid+1;
     }
        return (start*start == num)?true:false;
    }
};