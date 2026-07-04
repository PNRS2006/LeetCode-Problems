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

int* inorderTraversal(struct TreeNode* root, int* r) {
    int* a = (int*)malloc(100*sizeof(int));
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
    *r=j;
    return a;
}