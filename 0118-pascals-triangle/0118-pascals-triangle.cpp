class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int> >ret;
        for(int i = 0 ; i<numRows;i++){
            ret.push_back(vector<int>(i+1,0));
            for(int j = 0 ;j<=i;j++){
                if(j==0 || j==i)
                    ret[i][j] = 1;
                else{
                    ret[i][j] = ret[i-1][j-1]+ret[i-1][j];
                }
            }
        }    
        return ret;
    }
        
    long long fac(int num){
        int p = 1;
        for(int i=1;i<=num;i++)
            p += i*p;
        return p;
    }    
    
};