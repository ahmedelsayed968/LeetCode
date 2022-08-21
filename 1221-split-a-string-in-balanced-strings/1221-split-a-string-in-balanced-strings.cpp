class Solution {
public:
    int balancedStringSplit(string s) {
        string temp = "";
        int ct = 0;
        stack<char> st;
        
        for(auto it:s){
            if(st.empty())
                st.push(it);
            else{
                if(st.top() !=it){
                    st.pop();
                    if(st.empty())
                        ct++;
                }
                else
                    st.push(it);
            }
        }
        return ct;
    }
};