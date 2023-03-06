class Solution {
public:
    string capitalizeTitle(string title) {
        // turn all to lower
        int size = title.size();
        for(int i = 0;i<size;i++){
            title[i] = (char)tolower(title[i]);
        }
        stringstream ss(title);
        vector<string> tokens;
        string temp;
        while(getline(ss,temp,' ')){
            tokens.push_back(temp);
        }
        int tokensSize = tokens.size();
        string ret = "";
        for(int i = 0;i<tokensSize;i++){
            if(tokens[i].size() >2)
                tokens[i][0] = (char)toupper(tokens[i][0]);
            ret += tokens[i]+" ";
        }
        ret = ret.substr(0,ret.size()-1);
        return ret;
            
        
    }
};