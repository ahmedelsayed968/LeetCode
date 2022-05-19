class Solution {
public:
    int high = 2147483647;
    int low =  -2147483648;
    int reverse(int x) {
        if(!x) return x;
        string s = to_string(x);
        if(x  > 0) std::reverse(s.begin(), s.end());
        else std::reverse(s.begin()+1, s.end());
        long long ne = stoll(s);
        if(ne > high || ne < low) return 0;
        return (int)ne;
    }
};