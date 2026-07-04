bool checkIfExist(int* a, int n) {
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((a[j]*2==a[i]) || (a[j]==a[i]*2)) return true;
        }
    }
    return false;
}