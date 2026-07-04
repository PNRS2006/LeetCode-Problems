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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>v;
        if(root == NULL) return v;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int l = q.size();
            vector<int>cur_lev;
            for(int i=0;i<l;i++){
                TreeNode *node = q.front();
                q.pop();
                cur_lev.push_back(node->val); 
                if(node->left!=NULL) q.push(node->left);
                if(node->right!=NULL) q.push(node->right);
            }
            v.push_back(cur_lev);
        }
        return v;
    }
};