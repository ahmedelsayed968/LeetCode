class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char> ret;
        int size=chars.size();
        for(int i=0;i<size;i++){
            int count = 0;
                int j =i+1;
                for(;j<size;j++)
                {
                    if(chars[i]==chars[j]){
                        chars[j] = '0';
                        count++;
                    }
                    else{
                        
                        break;}
                }
                ret.push_back(chars[i]);
                if(count){
                    if(count+1 <10)
                        ret.push_back('0'+count+1);
                    else{
                        string num = to_string(count+1);
                        for(auto it:num)
                            ret.push_back(it);
                    }
                
            }
            
            
            i = j-1;
        }
        chars  = ret;
        return chars.size();
    }
};