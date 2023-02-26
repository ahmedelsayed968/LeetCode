class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ret;
        for (int i = 0 ;i<=rowIndex;i++){
            vector<int> temp;
            for(int j=0;j<=i;j++){
                if(j==0 || j==i)
                    temp.push_back(1);
                else{
                    temp.push_back((ret[j]+ret[j-1]));
                }
            }
            ret = temp;
        }
        return ret;
    }
};