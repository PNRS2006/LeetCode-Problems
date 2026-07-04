int minPartitions(char* n) {
    int c=0;
    for(int i=0;i<strlen(n);i++)
    {
        int d=n[i]-'0';
        if(d>c) c=d;
    }
    return c;
}