class Solution {
public:
    string convert(string s, int numRows) {
        // define as a grid
        // we are moving down or diagonal
        vector<string>grid(numRows,"");
        int size = s.size();
        int i = 0;
        while(i<size){
            for(int j = 0;j<numRows && i<size;j++) grid[j].push_back(s[i++]);
            for(int j=numRows-2;j>0 && i<size;j--) grid[j].push_back(s[i++]);
        }
        string ret;
        for(string it:grid){ 
            ret += it;
            cout << it;
        }

        return ret;
    }
};