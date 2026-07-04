bool arrayStringsAreEqual(char** a, int n, char** b, int m) {
    int e=0,f=0;
    for(int i=0;i<n;i++)
    {
        e+=strlen(a[i]);
    }
    for(int i=0;i<m;i++)
    {
        f+=strlen(b[i]);
    }
    if(e!=f) return false;
    char* c = (char*)malloc((e+1)*sizeof(char));
    char* d = (char*)malloc((f+1)*sizeof(char));
    c[0]='\0';
    d[0]='\0';
    for(int i=0;i<n;i++)
    {
        strcat(c,a[i]);
    }
    for(int i=0;i<m;i++)
    {
        strcat(d,b[i]);
    }
    bool res=strcmp(c,d)==0;
    free(c);
    free(d);
    return res;
}