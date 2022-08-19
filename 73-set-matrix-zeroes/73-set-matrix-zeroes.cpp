class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> row,col;
        int rows = matrix.size(),cols = matrix[0].size();
        for (int i = 0;i<rows;i++){
            for(int j = 0;j<cols;j++){
                if(!matrix[i][j]){
                    row.insert(i);
                    col.insert(j);
                }
            }
        }
        for(auto it:row){
            vector<int> v(cols,0);
            matrix[it] = v;
        }
        for(auto it:col){
            for(int i = 0;i<rows;i++){
                matrix[i][it] = 0;
            }
        }
        
    }
};