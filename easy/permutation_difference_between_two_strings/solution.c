int findPermutationDifference(char* s, char* t) {
    int c=0;
    for(int i=0;i<strlen(s);i++)
    {
        for(int j=0;j<strlen(t);j++)
        {
            if(s[i]==t[j]) c+=abs(i-j);
        }
    }
    return c;
}