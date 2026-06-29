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

void f(TreeNode *root,string &s){
    if(root==NULL) {s+="#,"; return;}
    s+=to_string(root->val)+",";
    f(root->left,s);
    f(root->right,s);
}
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string s;
        f(root,s);
        return s;
    }

TreeNode *build(vector<string>&v,int &i){
    if(v[i]=="#"){
        i++;
        return NULL;
    }
    TreeNode *root=new TreeNode(stoi((v[i])));
    i++;
    root->left=build(v,i);
    root->right=build(v,i);
    return root;
}
    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        vector<string>v;
        string temp;
        for(char c:data){
            if(c==','){
                v.push_back(temp);
                temp="";
            }
            else {
                temp+=c;
            }
        }
        int i=0;
        return build(v,i);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));
