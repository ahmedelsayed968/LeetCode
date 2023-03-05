class Solution {
public:
    int titleToNumber(string columnTitle) {
        // iterate over the string from the back 
        // convert each character to the decimal value d
        // each position is considered to be 26^i i is the index i zero based 
        reverse(begin(columnTitle),end(columnTitle));
        int size = columnTitle.size();
        long long ref = 1;
        int sum = 0;
        for(int i = 0;i<size;i++){
            int num = columnTitle[i]-'A'+1;
            sum += num*ref;
            ref *= 26;
        }
        return sum;
        
    }
};