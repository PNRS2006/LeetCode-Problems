bool checkXMatrix(int** a, int n, int* gridColSize) {
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j || i+j==n-1)
            {
                if(a[i][j]==0)
                  return false;
            }
            if(i!=j && i+j!=n-1)
            {
                if(a[i][j]!=0)
                  return false;
            }
        }
    }
    return true;
}