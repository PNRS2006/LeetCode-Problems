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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>v;
        if(root == NULL) return v;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int l=q.size();
            vector<int>cl;
            for(int i=0;i<l;i++){
                TreeNode *temp = q.front();
                q.pop();
                cl.push_back(temp->val);
                if(temp->left!=NULL) q.push(temp->left);
                if(temp->right!=NULL) q.push(temp->right);
            }
            v.push_back(cl);
        }
        reverse(v.begin(),v.end());
        return v;
    }
};