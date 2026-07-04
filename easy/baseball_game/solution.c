int calPoints(char** o, int s) {
    int st[1001];
    int top = -1;
    int i,c=0;
    for(i=0;i<s;i++)
    {
        char ch = o[i][0];
        if(ch!='C' && ch!='D' && ch!='+')
        {
            st[++top] = atoi(o[i]);
        }
        else if(ch=='C')
        {
            top--;
        }
        else if(ch=='D')
        {
            int d = st[top] * 2;
            st[++top] = d;
        }
        else
        {
            int a = st[top] + st[top-1];
            st[++top] = a;
        }
    }
    for(i=top;i>=0;i--)
    {
        c+=st[i];
    }
    return c;
}