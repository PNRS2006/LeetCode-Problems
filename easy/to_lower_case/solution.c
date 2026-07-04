char* toLowerCase(char* s) {
    int n = strlen(s);
    char* a = (char*)malloc((n+1)*sizeof(char));
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(isalpha(s[i])) a[j++] = tolower(s[i]);
        else a[j++] = s[i];
    }
    a[j]='\0';
    return a;
}