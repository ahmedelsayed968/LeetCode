class Solution {
private:
    unordered_map<int,vector<int>> GRAPH;
    void add_edge(int source,int destination){
        GRAPH[source].push_back(destination);
        GRAPH[destination].push_back(source);
    }
public:
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
        // make undirected graph using the pairs
        // iterate over the graph check if the node is already visited or not
        // if not make the swip between node and adjacent
        // mark node as visited 
        // make dfs on the adjacent node
        for(auto pair:pairs){
            add_edge(pair[0],pair[1]);
        }
        unordered_set<int> visited;
        string str = s;
        for(auto node:GRAPH){
            if(visited.find(node.first) == visited.end()){
                vector<int> cc_nodes;
                DFS(node.first,visited,cc_nodes);
                
                string str = "";
                for(auto it:cc_nodes)
                    str+=s[it];
                
                // sort cc_nodes
                sort(cc_nodes.begin(),cc_nodes.end());
                // sort str
                sort(str.begin(),str.end());
                for(int i = 0;i<cc_nodes.size();i++){
                    s[cc_nodes[i]]  = str[i];
                }
                    
            }
        }
        return s;
    }
    void DFS(int node,unordered_set<int>&visited,vector<int>& cc_nodes){
        visited.insert(node);
        cc_nodes.push_back(node);
        for(auto neighbor:GRAPH[node]){
            if(visited.find(neighbor)  == visited.end())
                DFS(neighbor,visited,cc_nodes);
        }
    }
};