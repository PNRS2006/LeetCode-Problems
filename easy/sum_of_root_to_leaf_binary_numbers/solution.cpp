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
    int fun(TreeNode* root,int c){
        if(root==NULL) return 0;
        c = (c*2)+(root->val);
        if(!root->left && !root->right) return c;
        return fun(root->left,c)+fun(root->right,c);
    }
    int sumRootToLeaf(TreeNode* root) {
        return fun(root,0);
    }
};