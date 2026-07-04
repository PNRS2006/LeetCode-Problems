/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* minOperations(char* boxes, int* returnSize) {
    int n = strlen(boxes);
    int* ans = (int*)malloc(n * sizeof(int));
    
    for (int i = 0; i < n; i++) {
        ans[i] = 0;
        for (int j = 0; j < n; j++) {
            if (boxes[j] == '1') {
                ans[i] += abs(i - j);
            }
        }
    }
    *returnSize = n;
    return ans;
}
