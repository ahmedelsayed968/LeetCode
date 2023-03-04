class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int size = image.size();
        DFS(image,sr,sc,color,size);
        // get neighbours of the i,j -> i+1,j -> i-1,j -> i,j+1 -> i,j-1
        // fliter only the neighbors that have the same value of i,j
        // color the i,j pixel
        // DFS over the neighbers but check if one of them has already colored 
        return image;
    }
    void DFS(vector<vector<int>>& image, int i, int j, int color,int &size){
        // get neighbours of the i,j -> i+1,j -> i-1,j -> i,j+1 -> i,j-1
        // fliter only the neighbors that have the same value of i,j
        // color the i,j pixel
        // DFS over the neighbers but check if one of them has already colored
        vector<pair<int,int>>neighbors;
        getNeighbors(image,i,j,size,neighbors,image[i][j]);
        image[i][j] = color;
        for(auto neigh:neighbors){
            if(image[neigh.first][neigh.second] != color)
                DFS(image,neigh.first,neigh.second,color,size);
        }
        
            
        
        
    }
    void getNeighbors(vector<vector<int>>& image,int i,int j,int limit,vector<pair<int,int>>&neighbors,int value){
        if(i+1 < limit && image[i+1][j]==value)
            neighbors.push_back(make_pair(i+1,j));
        if(i-1 >=0 && image[i-1][j]==value)
            neighbors.push_back(make_pair(i-1,j));
        if(j+1 < image[i].size() && image[i][j+1]==value)
            neighbors.push_back(make_pair(i,j+1));
        
        if(j-1 >= 0 && image[i][j-1]==value)
            neighbors.push_back(make_pair(i,j-1));
            

            
    }
    
};