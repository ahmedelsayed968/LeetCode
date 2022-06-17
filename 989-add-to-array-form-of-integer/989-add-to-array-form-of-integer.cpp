class Solution {
public:
   vector<int> addToArrayForm(vector<int>& num, int k) {
        auto it = num.rbegin();
        int carry = 0;
        int sum = 0;
        int digit;
        vector<int> ret;
        while(k && it != num.rend()){
            digit = k%10;
            k/=10;
            sum = *it + digit +carry;
            if(sum >= 10){
                ret.push_back(sum%10);
                carry = sum/10;
            }
            else{
                ret.push_back(sum);
                carry = 0;
            }
            it++;
        }
        while(it != num.rend()){
            sum = *it+carry;
            ret.push_back(sum%10);
            carry = sum /10;
            it++;
        }
        while(k){
            digit = k%10;
            sum = digit+carry;
            if(sum >=0){
                ret.push_back(sum%10);
                carry = sum/10;
            }
            else{
                ret.push_back(sum);
                carry = 0;
            }
            k/=10;
        }
        while(carry){
            ret.push_back(carry%10);
            carry /=10; 
        }
        std::reverse(ret.begin(), ret.end());
        return ret;
    }
};