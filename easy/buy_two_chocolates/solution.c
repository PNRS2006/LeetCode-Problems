void sort(int* p,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(p[j+1]<p[j])
            {
                int temp = p[j+1];
                p[j+1]=p[j];
                p[j]=temp;
            }
        }
    }
}
int buyChoco(int* p, int n, int m) {
    sort(p,n);
    int a=0;
    for(int i=0;i<2;i++)
    {
        a+=p[i];
    }
    if(a<=m) return m-a;
    return m;
}