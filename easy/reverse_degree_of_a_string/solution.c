int reverseDegree(char* s) {
    int c=0;
    for(int i=0;i<strlen(s);i++)
    {
        c+=(26-(s[i]-97))*(i+1);
    }
    return c;
}