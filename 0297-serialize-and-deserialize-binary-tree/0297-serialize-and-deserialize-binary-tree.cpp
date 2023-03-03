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
    void getTreeSerialized(TreeNode* root,string&output){
        if(!root){
            output +="null,";
            return;}
        output += to_string(root->val)+",";
        getTreeSerialized(root->left,output);
        getTreeSerialized(root->right,output);
        
    }
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string treeString = "";
        getTreeSerialized(root,treeString);
        return treeString;
    }
           
    void getTokens(vector<string>&tokens,string&my_string,char separator){
        stringstream ss(my_string); //convert my_string into string stream
       string temp_str;

       while(getline(ss, temp_str,  separator)){ 
          tokens.push_back(temp_str);
       }
    }
           
    queue<TreeNode*> getNodes(vector<string>&tokens){
        queue<TreeNode*> q;
        for(auto str:tokens){
            
            if(str == "null" ){
                q.push(nullptr);
            }
            else{
                // cout << str << endl;
                TreeNode* node  = new TreeNode(stoi(str));
                q.push(node);
            }
        }
        return q;
    }       
    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        // cout << data << endl;
        if(data.empty())
            return nullptr;
        vector<string> tokens;
        getTokens(tokens,data,',');
        queue<TreeNode*> q = getNodes(tokens);
        TreeNode* root = nullptr;
        // q.pop();
        
        return buildTree(q);
    }
           
    TreeNode* buildTree(queue<TreeNode*>&q){
        if(q.empty())
            return nullptr;
        TreeNode* root=q.front();
        q.pop();
        if(!root)
            return nullptr;
        root->left = buildTree(q);
        root->right= buildTree(q);
        return root;
            
    }       
           
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));