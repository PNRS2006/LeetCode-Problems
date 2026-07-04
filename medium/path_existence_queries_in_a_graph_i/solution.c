
bool* pathExistenceQueries(int n, int* nums, int numsSize, int maxDiff, int** queries, int queriesSize, int* queriesColSize, int* returnSize) {
    int* component = (int*)malloc(n * sizeof(int));
    int compId = 0;
    component[0] = compId;

    for (int i = 1; i < n; ++i) {
        if (nums[i] - nums[i - 1] <= maxDiff) {
            component[i] = compId;
        } else {
            compId++;
            component[i] = compId;
        }
    }

    bool* answer = (bool*)malloc(queriesSize * sizeof(bool));
    for (int i = 0; i < queriesSize; ++i) {
        int u = queries[i][0];
        int v = queries[i][1];
        answer[i] = (component[u] == component[v]);
    }

    free(component);
    *returnSize = queriesSize;
    return answer;
}
