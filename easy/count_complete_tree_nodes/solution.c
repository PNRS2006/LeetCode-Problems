/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int countNodes(struct TreeNode* root) {
    int* a = (int*)malloc(50000*sizeof(int));
    int j=0;
    void inOrder(struct TreeNode *root)
    {
        if(root!=NULL)
        {
            inOrder(root->left);
            a[j++]=root->val;
            inOrder(root->right);
        }
        
    }
    inOrder(root);
    return j;
}