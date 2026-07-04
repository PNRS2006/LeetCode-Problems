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
    TreeNode* build(vector<int>& n , int l , int r){
        if(l>r) return NULL;
        int m = (l+r)/2;
        TreeNode *root = new TreeNode(n[m]);
        root->left = build(n,l,m-1);
        root->right = build(n,m+1,r);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& n) {
        return build(n,0,n.size()-1);
    }
};