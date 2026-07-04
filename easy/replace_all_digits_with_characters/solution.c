char* replaceDigits(char* s) {
    char* a = (char*)malloc((strlen(s)+1)*sizeof(char));
    int j=0;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]>='0' && s[i]<='9') a[j++]=s[i-1]+(s[i]-'0');
        else a[j++]=s[i];
    }
    a[j]='\0';
    return a;
}