class Solution {
    enum direction{UP=0,DOWN=1,LEFT=2,RIGHT=3};
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rows = matrix.size(),cols = matrix[0].size();
        // create visited 2d array to keep track the visited nodes
        // initial direction is right 
        // keep going until find boundaries and only have on direction to take otherwise break mission accomplished!
        // stop when i have discovered(visited) the top,bottom,left,right 
        enum direction currentDir = RIGHT;
        // boundaries to keep track the last our progress on the grid
        int top = 0,bottom=rows-1,right=cols-1,left=0;
        vector<int> nums;
        while(top<=bottom && left<=right){
            if(currentDir==RIGHT){
                for(int i = left;i<=right;i++) nums.push_back(matrix[top][i]);
                currentDir = DOWN;
                top++;
            }
            else if(currentDir == DOWN){
                for(int i = top;i<=bottom;i++) nums.push_back(matrix[i][right]);
                currentDir = LEFT;
                right--;
            }
            else if(currentDir ==LEFT){
                for(int i = right ;i>=left;i--) nums.push_back(matrix[bottom][i]);
                currentDir = UP;
                bottom--;
            }
            else{
                for(int i=bottom;i>=top;i--) nums.push_back(matrix[i][left]);
                currentDir = RIGHT;
                left++;
            }
        }
        return nums;
        
    }
    
    
};