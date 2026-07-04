int missingNumber(int* nums, int numsSize) {
    int* s=nums;
    int n=numsSize;
    int a=0,i,b;
    for(int i=0;i<n;i++)
    {
        a+=s[i];
    }
    b=n*(n+1)/2;
    return abs(b-a);
}