class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        // get the first 1 on the grid (i,j)
        // get connected components of that (i,j)
        // 
        vector<pair<int,int>> dir{{0,-1},{0,1},{1,0},{-1,0}};
        int i_th = 0, j_th  = 0;
        int rows = grid.size(),cols = grid[0].size();
        for(int i = 0;i<rows;i++){
            for(int j = 0;j<cols;j++){
                if(grid[i][j]){
                    i_th = i,j_th =j;break;}
            }
        }
        queue<pair<int,int>>q;
        q.push({i_th,j_th});
        int sum = 0;
        vector<vector<bool>>visited(rows,vector<bool>(cols,false));
        while(!q.empty()){
            pair<int,int> curr = q.front();
            q.pop();
            if(visited[curr.first][curr.second])
                continue;
            visited[curr.first][curr.second] = true;
            if(curr.first+1 < rows){
                if(grid[curr.first+1][curr.second])
                    q.push({curr.first+1,curr.second});
                else
                    sum ++;
            }
            else
                sum++;
            
            if(curr.first-1 >= 0){
                if(grid[curr.first-1][curr.second])
                    q.push({curr.first-1,curr.second});
                else
                    sum ++;
            }
            else
                sum++;
            
            if(curr.second-1 >= 0){
                if(grid[curr.first][curr.second-1])
                    q.push({curr.first,curr.second-1});
                else
                    sum ++;
            }
            else
                sum++;
            
            if(curr.second+1 < cols){
                if(grid[curr.first][curr.second+1])
                    q.push({curr.first,curr.second+1});
                else
                    sum ++;
            }
            else
                sum++;
            
        }
        return sum;
    }
};