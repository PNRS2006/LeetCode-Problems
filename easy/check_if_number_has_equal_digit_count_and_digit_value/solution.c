bool digitCount(char* a) {
    int n=strlen(a);
    int b[11]={0};
    for(int i=0;i<n;i++)
    {
        b[a[i]-'0']++;
    }
    for(int i=0;i<n;i++)
    {
        int ch=a[i]-'0';
        if(ch!=b[i]) return false;
    }
    return true;
}