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
    void invert(TreeNode* left,TreeNode* right,int c){
        if(!left) return;
        if(c%2==0){
            int temp = left->val;
            left->val = right->val;
            right->val = temp;
        }
        invert(left->left,right->right,c+1);
        invert(left->right,right->left,c+1);
    }
    TreeNode* reverseOddLevels(TreeNode* root) {
        if(root==NULL) return 0;
        invert(root->left,root->right,0);
        return root;
    }
};