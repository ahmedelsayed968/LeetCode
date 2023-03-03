/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string treeSerialized="";
        serializeTree(root,treeSerialized);
        return treeSerialized;
    }
    void serializeTree(TreeNode* root,string &output){
        if(!root)
            return;
        output += to_string(root->val);
        output +=',';
        serializeTree(root->left,output);
        serializeTree(root->right,output);
    }
    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data.empty())
            return nullptr;
        vector<string>tokens;
        stringstream check1(data);
        string intermediate;

        // Tokenizing w.r.t. space ' '
        while(getline(check1, intermediate, ','))
        {
            tokens.push_back(intermediate);
        }
        
        
        queue<TreeNode*>q; 
        for(auto str:tokens){
            // cout << str << endl;
            int num = stoi(str);
            TreeNode* node = new TreeNode(num);
            q.push(node);
        }
        return getTree(q,INT_MIN,INT_MAX);
        
    }
    
    TreeNode* getTree(queue<TreeNode*>&q,int lower,int upper){
        if(q.empty())
            return nullptr;
        TreeNode* current = q.front();
        if(lower > current->val || current->val > upper)
            return nullptr;
        q.pop();
        // cout << current->val << endl;
        current->left = getTree(q,lower,current->val);
        current->right= getTree(q,current->val,upper);
        
        return current;    
    }
};

// Your Codec object will be instantiated and called as such:
// Codec* ser = new Codec();
// Codec* deser = new Codec();
// string tree = ser->serialize(root);
// TreeNode* ans = deser->deserialize(tree);
// return ans;