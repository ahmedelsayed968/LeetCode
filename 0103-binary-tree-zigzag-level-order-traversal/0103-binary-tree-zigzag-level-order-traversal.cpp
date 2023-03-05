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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root)
            return {};
        vector<vector<int>> nums;
        queue<TreeNode*> q;
        q.push(root);
        for(int size = 1,level=1;!q.empty();size=q.size(),level++){
            vector<int> temp;
            while(size--){
                TreeNode* curr = q.front();
                q.pop();
                    if(curr){
                        q.push(curr->left);
                        q.push(curr->right);
                        temp.push_back(curr->val);

                    }

            }
            if(!temp.empty()){
                if(level %2!=0)
                    nums.push_back(temp);
                else{
                    reverse(temp.begin(),temp.end());
                    nums.push_back(temp);    
                }
            }
        }
        return nums;
    }
};