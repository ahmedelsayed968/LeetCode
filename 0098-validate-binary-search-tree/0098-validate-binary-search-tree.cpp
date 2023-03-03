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
    vector<int> arr;
public:
    bool isValidBST(TreeNode* root) {
        initializeArrayBST(root);
        int size  = arr.size();
        for(int i = 1;i<size;i++){
            if(arr[i]<=arr[i-1])
                return false;
        }
        return true;
                     

    }
       
    void initializeArrayBST(TreeNode* root){
        if(root){
            initializeArrayBST(root->left);
            arr.push_back(root->val);
            initializeArrayBST(root->right);

        }
    }
        
    
};