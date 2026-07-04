/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findWordsContaining(char** a, int n, char x, int* r) {
    int* b = (int*)malloc(n*sizeof(int));
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(strchr((a[i]),x)) b[j++]=i;
    }
    *r=j;
    return b;
}