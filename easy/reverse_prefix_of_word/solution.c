int indexof(char* w, char c)
{
    for(int i=0;i<strlen(w);i++)
    {
        if(w[i]==c) return i;
    }
    return -1;
}
char* reversePrefix(char* w, char c) {
    int a = indexof(w,c);
    int n=strlen(w);
    char* b = (char*)malloc((n+1)*sizeof(char));
    int j=0;
    if(a==-1)
    {
        strcpy(b,w);
        return b;
    }
    for(int i=a;i>=0;i--)
    {
        b[j++]=w[i];
    }
    for(int i=a+1;i<n;i++)
    {
        b[j++]=w[i];
    }
    b[j]='\0';
    return b;

}