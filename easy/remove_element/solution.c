int removeElement(int* a, int n, int v) {
    int* b = (int*)malloc(n*sizeof(int));
    int j=0,i;
    for(i=0;i<n;i++)
    {
        if(a[i]!=v) a[j++]=a[i];
    }
    return j;
}