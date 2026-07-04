int arraySign(int* nums, int n) {
    int* a=nums;
    int i,b=0;
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            b++;
        }
        else if(a[i]==0)
        {
            return 0;
            break;
        }
    }
    if(b%2==0)
      return 1;
    return -1;
}