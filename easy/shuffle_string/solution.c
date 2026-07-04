char* restoreString(char* s, int* a, int n) {
    char* c = (char*)malloc((n+1)*sizeof(char));
    int b,i=0;
    for(i=0;i<n;i++)
    {
        c[a[i]]=s[i];
    }
    c[n]='\0';
    return c;
}