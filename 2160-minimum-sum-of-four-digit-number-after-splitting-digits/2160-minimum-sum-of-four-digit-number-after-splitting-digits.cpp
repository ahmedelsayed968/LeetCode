class Solution {
public:
    int minimumSum(int num) {
        string n = to_string(num);
        int size  = n.size();
//         if(size%2!=0)
//             n+='0';
        sort(n.begin(),n.end());
        string min_part = n.substr(0,2);
        string max_part = n.substr(size/2,2);
        int min = ((min_part[0]-'0')*10+max_part[1]-'0') + ((min_part[1]-'0')*10+max_part[0]-'0') ;
        return min;


        
    }
};