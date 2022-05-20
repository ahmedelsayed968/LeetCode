class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int size = matrix[0].size();
        // transpose
        for(int i = 0 ; i < size ; ++i){
            for (int j = i; j < size; ++j) {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
        
        // reverse cols
        for (int i = 0; i < size; ++i) {
            std::reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};