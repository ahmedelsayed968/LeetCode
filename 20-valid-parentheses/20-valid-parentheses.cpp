class Solution {
        public:
        bool isValid(string s) {
            stack <char> stack_;
            bool flage = false ;
            for(auto it:s){
                if(it == '(' || it == '{' || it == '[')
                    stack_.push(it);
                else{
                    if(!stack_.empty() && ((it == ')' && stack_.top()=='(') || (it == '}' && stack_.top()=='{') || (it == ']' && stack_.top()=='['))  )
                        stack_.pop();
                    else
                    {
                        flage = true;
                        break;
                    }

                }
            }
            return (!flage && stack_.empty());
        }
};