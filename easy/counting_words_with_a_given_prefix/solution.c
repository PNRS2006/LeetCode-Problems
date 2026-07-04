int prefixCount(char** a, int n, char* p) {
    int c=0;
    int k=strlen(p);
    for(int i=0;i<n;i++)
    {
        if(strncmp(a[i],p,k)==0) c++;
    }
    return c;
}