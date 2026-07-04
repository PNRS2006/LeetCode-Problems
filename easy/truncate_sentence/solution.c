char* truncateSentence(char* s, int k) {
    int c=0,i=0;
    while(s[i]!='\0')
    {
        if(s[i]==' ') c++;
        if(c==k) break;
        i++;
    }
    char* a = (char*)malloc((i+1)*sizeof(int));
    strncpy(a,s,i);
    a[i]='\0';
    return a;
}