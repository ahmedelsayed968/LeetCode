/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int maxDepth(Node* root) {
        if(!root)
            return 0; 
        queue<Node*> q;
        q.push(root);
        int level = 0;
        for(int size=1;!q.empty();size=q.size(),level++){
            while(size--){
                Node* curr = q.front();
                q.pop();
                for(auto child:curr->children){
                    if(child)
                        q.push(child);
                }
            }
        }
        return level;
    }
};