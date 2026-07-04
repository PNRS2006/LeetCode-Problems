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
int* preorderTraversal(struct TreeNode* root, int* r) {
    int* a = (int*)malloc(100*sizeof(int));
    int j=0;
    void preOrder(struct TreeNode *root)
    {
        if(root!=NULL)
        {
            a[j++]=root->val;
            preOrder(root->left);
            preOrder(root->right);
        }
        
    }
    preOrder(root);
    *r=j;
    return a;
}