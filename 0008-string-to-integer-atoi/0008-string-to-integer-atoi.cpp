// #include <iostream>
// using namespace boost::algorithm;

class Solution {
public:
    int myAtoi(string s) {
        // get the start of the num
        // specify is it pos or neg
        // recurse over it 
        int i =0;
        while(s[i]==' ')
            i++;
        s = s.substr(i);
        int sign = 1;
        int index = 0;
        if(s[index]=='-'){
            sign = -1;
            index++;
        }
        else if(s[index]=='+'){
            index++;
        }
        int size = s.size();
        long long result= 0;
        while(index < size){
            char num = s[index];
            if(!isdigit(num))
                break;
            else{
                int digit = num-'0';
                if(result*sign >=INT_MAX || result*sign<=INT_MIN)
                    break;
                result = result *10 + digit;
            }
            index++;
        }
        if(sign == -1){
            return sign*result <=INT_MIN ?INT_MIN:sign*result; 
        }
        return result >=INT_MAX ?INT_MAX:result;
            
        
    }
    long long getNum(string&s,int&size,int currentPos){
        
        if(currentPos >=size || s[currentPos]=='+' ||s[currentPos]=='-')
            return 0;
        int currD = s[currentPos]-'0';
        return (currD*pow(10,(size-currentPos-1))+getNum(s,size,currentPos+1));
    }
};