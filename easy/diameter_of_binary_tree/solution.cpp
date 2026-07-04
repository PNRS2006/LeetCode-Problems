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
    int maxDia(TreeNode* root , vector<int>&v){
        if(root == NULL) return 0;
        int l = maxDia(root->left,v);
        int r = maxDia(root->right,v);
        v.push_back(l+r);
        return max(l,r)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        vector<int>v;
        maxDia(root,v);
        return *max_element(v.begin(),v.end());
    }
};