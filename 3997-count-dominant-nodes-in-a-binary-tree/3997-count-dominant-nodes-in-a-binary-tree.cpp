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
    int c=0;
private:
    int dfs(TreeNode* root){
        if(!root) return INT_MIN;
        int l=dfs(root->left);
        int r=dfs(root->right);
        int mx = max(root->val,max(l,r));
        if(root->val==mx) c++;
        return mx;
    }
public:
    int countDominantNodes(TreeNode* root) {
        dfs(root);
        return c;
    }
};