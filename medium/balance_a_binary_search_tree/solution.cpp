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
    vector<int>v;
    void inOrder(TreeNode* root){
        if(root!=NULL)
        {
            inOrder(root->left);
            v.push_back(root->val);
            inOrder(root->right);
        }
    }
    TreeNode* tree(int l , int r){
        if(l>r) return NULL;
        int m = (l+r)/2;
        TreeNode* root = new TreeNode(v[m]);
        root->left = tree(l,m-1);
        root->right = tree(m+1,r);
        return root;
    }
    TreeNode* balanceBST(TreeNode* root) {
        inOrder(root);
        return tree(0,v.size()-1);
    }
};