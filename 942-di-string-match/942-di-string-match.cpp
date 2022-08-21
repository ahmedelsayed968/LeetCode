class Solution {
public:
    vector<int> diStringMatch(string s) {
        int size = s.size();
        vector<int> ret;
        int t1 = 0,t2 = s.size();
        for(int i = 0;i<size;i++){
            if(s[i]=='D'){
                ret.push_back(t2--);
            }    
            else{
                ret.push_back(t1++);
            }
        }
        ret.push_back(t1);
        return ret;
    }
};