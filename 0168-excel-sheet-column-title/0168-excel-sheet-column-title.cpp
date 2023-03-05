class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result = "";
        while(columnNumber){
            columnNumber--;
            int re = columnNumber%26;
        
            result += 'A'+re;
            
            columnNumber = floor(columnNumber/26);
        }
        reverse(begin(result),end(result));
        return result;
    }
};