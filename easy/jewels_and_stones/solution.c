int numJewelsInStones(char* j, char* s) {
    int c=0;
    for(int i=0;i<strlen(j);i++)
    {
        for(int k=0;k<strlen(s);k++)
        {
            if(j[i]==s[k]) c++;
        }
    }
    return c;
}