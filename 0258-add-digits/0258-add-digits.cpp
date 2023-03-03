class Solution {
public:
    int addDigits(int num) {
        int result = 0;
        while(num){
            result += num%10;
            num /= 10;
            if(num==0 && result > 9){
                num = result;
                result = 0;
            }
            
        }
        return result;
    }
};