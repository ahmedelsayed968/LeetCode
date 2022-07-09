class Solution {
public:
bool backspaceCompare(string s, string t) {
    string s_ = "",t_="";
    for(auto it:s)
    {
        if(it=='#'){
            if( !s_.empty())
                s_.pop_back();
        }
        else
            s_ += it;
    }
    for(auto it:t)
    {
        if(it=='#'){
            if( !t_.empty())
                t_.pop_back();
        }
        else
            t_ += it;
    }
    return s_==t_;
}
};