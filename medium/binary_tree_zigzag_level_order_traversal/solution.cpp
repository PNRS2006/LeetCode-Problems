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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>v;
        if(root == NULL) return v;
        queue<TreeNode*>q;
        q.push(root);
        bool l_r = true;
        while(!q.empty()){
            int l=q.size();
            vector<int>a(l);
            for(int i=0;i<l;i++){
                TreeNode *temp = q.front();
                q.pop();
                int idx = l_r ? i : l-i-1;
                a[idx] = (temp->val);
                if(temp->left != NULL) q.push(temp->left);
                if(temp->right != NULL) q.push(temp->right);
            }
            l_r = ! l_r;
            v.push_back(a);
        }
        return v;
    }
};