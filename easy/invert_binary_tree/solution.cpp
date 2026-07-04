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
    void fun(TreeNode* root){
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int l=q.size();
            for(int i=0;i<l;i++){
                TreeNode *temp = q.front();
                q.pop();
                TreeNode *temp1 = temp->left;
                temp->left = temp->right;
                temp->right = temp1;
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
        }
    }
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL) return 0;
        fun(root);
        return root;
    }
};