class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
         vector<string> v{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    set<string>st;
    for(auto word:words) {
        string psh ="";
        for(auto ch:word){
            psh += v[ch-'a'];
        }
        st.insert(psh);
    }
    return st.size();
    }
};