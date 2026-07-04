int scoreOfString(char* s) {
    int c=0;
    for(int i=0;i<strlen(s)-1;i++)
    {
        c+=abs(s[i]-s[i+1]);
    }
    return c;
}