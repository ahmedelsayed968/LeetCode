class Solution {
public:
    string reverseWords(string s) {
       vector <string> tokens;
        stringstream ss(s);
        string intermediate;

        // Tokenizing w.r.t. space ' '
        while(getline(ss, intermediate, ' '))
        {
            if(intermediate != "")
                tokens.push_back(intermediate);
        }
        reverse(tokens.begin(),tokens.end());
        string ret = "";
        for(auto it:tokens)
                ret+=it+" ";
        ret = ret.substr(0,ret.size()-1);
        return ret;
            }       
    
};