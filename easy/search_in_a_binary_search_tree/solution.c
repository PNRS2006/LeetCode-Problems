/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* searchBST(struct TreeNode* root, int val) {
    struct TreeNode* temp = root;
    while(temp!=NULL)
    {
        if(val == temp->val) return temp;
        else if(val < temp->val) temp = temp->left;
        else temp = temp->right;
    }
    return NULL;
}