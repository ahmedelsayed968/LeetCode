class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ret(n+1,0);
        // ret[0] = 0;
        // ret[1] = 1;
        // ret[2] = 1;
        for(int i = 0;i<=n;i++){
            if(i%2==0)
                ret[i] = ret[i/2];
            else{
                ret[i] = ret[i/2] +1;
            }
        }
        return ret;
    }
};