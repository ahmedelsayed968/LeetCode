class Solution {
public:
    int fib(int n) {
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        int first = 0,second = 1;
        int temp;
        for(int i  =1;i<n;i++){
            temp = first +second;
            first = second;
            second = temp;
        }
        return temp;
        
    }
};