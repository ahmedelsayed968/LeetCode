class Solution {
private:
    unordered_map<int,vector<int>> GRAPH;
    void add_edge(int source,int destination){
        GRAPH[source].push_back(destination);
        GRAPH[destination].push_back(source);
        
    }
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        // create our undirected graph
        for(auto pair:adjacentPairs){
            add_edge(pair[0],pair[1]);
        }
        // DFS FROM the node that have only one adjacent
        vector<int>nums;
        unordered_set<int> visited; // easy to search on it without wasting the space
        for(auto neigh:GRAPH){
            if(neigh.second.size()==1){
                DFS(nums,visited,neigh.first);
                break;
            }
            
        }
        return nums;
    }
    void DFS(vector<int>&nums,unordered_set<int>&visited,int destination){
        visited.insert(destination);
        nums.push_back(destination);
        for(auto neighbours:GRAPH[destination]){
            if(visited.find(neighbours)==visited.end())
                DFS(nums,visited,neighbours);
        }
    }
};