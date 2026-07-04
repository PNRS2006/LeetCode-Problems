int finalValueAfterOperations(char** a, int n) {
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(strcmp(a[i],"--X")==0 || strcmp(a[i],"X--")==0) c-=1;
        else if(strcmp(a[i],"++X")==0 || strcmp(a[i],"X++")==0) c+=1;
    }
    return c;
}