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
    void inorder(TreeNode* root,string &s){
        bool l=false , r=false;
        if(root==NULL) return;
        s+=to_string(root->val);
        if(root->left){
            l=true;
            s+="(";
            inorder(root->left,s);
            s+=")";
        }
        if(root->right){
            r=true;
            if(!l && r) s+="()";
            s+="(";
            inorder(root->right,s);
            s+=")";
        }
        l=false;
        r=false;
    }
    string tree2str(TreeNode* root) {
        string s="";
        inorder(root,s);
        return s;
    }
};