bool isPalindrome(char* s) {
    int n = strlen(s);
    char* a = (char*)malloc((n+1)*sizeof(char));
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(isalnum(s[i])) a[j++]=tolower(s[i]);
    }
    a[j]='\0';
    for(int i=0;i<j/2;i++)
    {
        if(a[i]!=a[j-i-1])
        {
            free(a);
            return false;
        }
    }
    free(a);
    return true;
}