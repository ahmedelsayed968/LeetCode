/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
    map<int,vector<int>>Graph;
    map<int,int> importance;
    vector<bool> visited;
    int sum = 0;
public:
    int getImportance(vector<Employee*> employees, int id) {
        // initialize the graph with the id--> children
        // initialize a hash table with table[id] = importance
        // dfs from the given id 
        // accumulate the importance using the hash table
        initializeTheGraph(employees);
        DFS(id);
        return sum;
        
    }
    void DFS(int id){
        this->sum += importance[id];
        for(auto child:Graph[id]){
                DFS(child);
        }
    }
    void initializeTheGraph(vector<Employee*> employees){
        int size = employees.size();
        for(int i = 0;i<size;i++){
            Graph[employees[i]->id] = employees[i]->subordinates;
            importance[employees[i]->id] = employees[i]->importance;
        }
        // visited.resize(Graph.size());
    }
};