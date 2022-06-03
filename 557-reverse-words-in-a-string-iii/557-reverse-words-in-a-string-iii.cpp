class Solution {
public:
    string reverseWords(string s) {
        string re = "";
        string temp = "";
        for(auto it:s)
        {
            
            if(it != ' '){
                temp +=it;
            }
            else{
                reverse(temp.begin(),temp.end());
                re += temp+" ";
                temp.clear();
            }
        }
       reverse(temp.begin(),temp.end());
        return re+temp;  
    }
};