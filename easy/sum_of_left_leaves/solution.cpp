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
    void inOrder(TreeNode* root , int& c){
        if(root == NULL) return;
        if(root->left && root->left->left == NULL && root->left->right==NULL) c+=root->left->val;
        inOrder(root->left,c);
        inOrder(root->right,c); 
    }
    int sumOfLeftLeaves(TreeNode* root) {
        if(root == NULL) return 0;
        int c=0;
        inOrder(root,c);
        return c;
    }
};