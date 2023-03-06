class Solution {
public:
    bool isCapital(char c){
        return c >= 'A' && c <='Z';
    }
    bool detectCapitalUse(string word) {
        int countCap = 0;
        for(auto c:word){
            if(isCapital(c)) countCap ++;
        }
        if(!countCap || countCap==word.size() || (countCap==1&&(isCapital(word[0])))) return true;
        return false;
    }
};