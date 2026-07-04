int minimumOperations(int* nums, int n) {
    int *a = nums;
    int b=0,i;
    for(i=0;i<n;i++)
    {
        if(a[i]%3 != 0) b++; 
    }
    return b;
}