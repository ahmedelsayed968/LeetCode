class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> mapD7k;
        for(auto s:strs)
        {
            string temp = s;
            std::sort(temp.begin(), temp.end());
            mapD7k[temp].push_back(s);
        }
        vector<vector<string>>ret;
        for(auto it:mapD7k)
            ret.push_back(it.second);






        return ret;
    }
};