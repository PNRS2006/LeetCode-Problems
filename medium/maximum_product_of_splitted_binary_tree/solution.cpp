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
    long long prod = 0;
    long long sum = 0;
    const int m = 1e9+7;
    void inorder(TreeNode* root){
        if(root->left) inorder(root->left);
        sum+=root->val;
        if(root->right) inorder(root->right);
    }

    long long max_prod(TreeNode* root){
        if(!root) return 0;
        long long sub_sum = root->val + max_prod(root->left) + max_prod(root->right);
        prod = max(prod , sub_sum*(sum-sub_sum));
        return sub_sum;
    }

    int maxProduct(TreeNode* root) {
        inorder(root);
        max_prod(root);
        return prod % m;
    }
};