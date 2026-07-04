bool isBalanced(char* a) {
    int b=0,c=0;
    for(int i=0;i<strlen(a);i++)
    {
        char ch = a[i];
        if(i%2==0)
        {
            b+=ch-'0';
        }
        else
        {
            c+=ch-'0';
        }
    }
    return b==c;
}