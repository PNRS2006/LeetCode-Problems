/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isValidBST(struct TreeNode* root) {
    int A[10000];
    int j=0;
    void inOrder(struct TreeNode* root)
    {
        if(root!=NULL)
        {
            inOrder(root->left);
            A[j++]=root->val;
            inOrder(root->right);
        }
    }
    inOrder(root);
    for(int i=0;i<j-1;i++)
    {
        if(A[i]>=A[i+1]) return false;
    }
    return true;
}