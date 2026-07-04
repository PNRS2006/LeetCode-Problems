int numberOfEmployeesWhoMetTarget(int* a, int n, int t) {
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=t) c++;
    }
    return c;
}