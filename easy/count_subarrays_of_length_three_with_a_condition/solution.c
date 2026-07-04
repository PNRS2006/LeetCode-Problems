int countSubarrays(int* a, int n) {
    int c = 0;
    for (int i = 0; i < n - 2; i++) {
        if(a[i]+a[i+2]==(a[i+1]/2) && a[i+1]%2==0) c++;
    }
    return c;
}
