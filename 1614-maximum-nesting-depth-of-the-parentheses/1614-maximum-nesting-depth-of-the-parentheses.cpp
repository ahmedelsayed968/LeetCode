class Solution {
public:
    int maxDepth(string s) {
        int mx = 0;
        stack<char> brackets;
        for(auto it:s){
            if(it=='(')
                brackets.push(it);
            else if(it == ')'){
                mx = max(mx,(int)brackets.size());
                brackets.pop();
            }
        }
        return mx;
    }
};