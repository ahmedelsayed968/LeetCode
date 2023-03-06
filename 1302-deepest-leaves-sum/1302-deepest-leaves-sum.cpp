/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        // // DFS
        // int sum = 0;
        // DFS(root,sum);
        // return sum;
        
        if(!root)
            return 0; 
        queue<TreeNode*> q;
        q.push(root);
        vector<int>lastLevel;
        for(int size=1;!q.empty();size=q.size()){
            vector<int> temp;
            while(size--){
                TreeNode* curr = q.front();
                q.pop();
                temp.push_back(curr->val);
                if(curr->left)
                    q.push(curr->left);
                if(curr->right)
                    q.push(curr->right);
            }
            if(q.empty())
                lastLevel = temp;
        }
        int sum = 0;
        for(auto it:lastLevel)
            sum += it;
        return sum;
        
        
    }
    void DFS(TreeNode* root,int&sum){
        if(!root)
            return;
        if(!root->left && !root->right)
            {sum+= root->val; return;}
        DFS(root->left,sum);
        DFS(root->right,sum);
    }
};