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
    vector<double> averageOfLevels(TreeNode* root) {
         if(!root)
            return {}; 
        queue<TreeNode*> q;
        q.push(root);
        vector<double> avg;
        for(int size=1;!q.empty();size=q.size()){
            double sum = 0;
            double len = size;
            while(size--){
                TreeNode* curr = q.front();
                q.pop();
                sum += curr->val;
                if(curr->left)
                    q.push(curr->left);
                if(curr->right)
                    q.push(curr->right);
            }
            double val = sum/len*1.0;
            avg.push_back(val);
            
        }
        return avg;
    }
};