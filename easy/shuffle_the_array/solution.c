

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* a, int numsSize, int n, int* r){
    int* b = (int*)malloc(2*n*sizeof(int));
    int j=0;
    for(int i=0;i<n;i++)
    {
        b[j++]=a[i];
        b[j++]=a[i+n];
    }
    *r = j;
    return b;
}