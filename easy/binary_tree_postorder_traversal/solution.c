/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* postorderTraversal(struct TreeNode* root, int* r) {
    int* a = (int*)malloc(100*sizeof(int));
    int j=0;
    void postOrder(struct TreeNode *root)
    {
        if(root!=NULL)
        {
            postOrder(root->left);
            postOrder(root->right);
            a[j++]=root->val;
        }
        
    }
    postOrder(root);
    *r=j;
    return a;
}