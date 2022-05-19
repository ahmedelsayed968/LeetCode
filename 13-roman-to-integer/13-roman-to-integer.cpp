class Solution {
    map<char,int> map_;
public:
    Solution(){
        map_ = {{'I',1},
                {'V',5},
                {'X',10},
                {'L',50},
                {'C',100},
                {'D',500},
                {'M',1000}
                };
    }
    int romanToInt(string s) {
        int size = s.size();
        int sum = 0;
        for (int i = 0; i < size; ++i) {
            if(s[i]=='I' && i+1 <size && s[i+1] == 'V' )
            {sum += 4;i++;}
            else if(s[i]=='I' && i+1 <size && s[i+1] == 'X')
            {sum += 9;i++;}
            else if(s[i]=='X' && i+1 <size && s[i+1] == 'L')
            {sum += 40;i++;}
            else if(s[i]=='X' && i+1 <size && s[i+1] == 'C')
            {sum += 90;i++;}
            else if(s[i]=='C' && i+1 <size && s[i+1] == 'D')
            {sum += 400;i++;}
            else if(s[i]=='C' && i+1 <size && s[i+1] == 'M')
            {sum +=900;i++;}
            else{
                sum +=map_[s[i]];
            }
        }
        return sum;

    }
};