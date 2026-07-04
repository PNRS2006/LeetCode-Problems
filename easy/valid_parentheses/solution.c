int is_open(char c)
{
   return c=='(' || c=='[' || c=='{';
}
bool isValid(char* s) {
    char st[10000];
    int top=-1;
    for(int i=0;i<strlen(s);i++)
    {
        if(is_open (s[i]))
        {
            st[++top] = s[i];
        }
        else 
        {
            if(top == -1) return false;
            else{
                if((s[i]=='}' && st[top]=='{') || (s[i]==']' && st[top]=='[') ||
                 (s[i]==')' && st[top]=='('))
                {
                    top--;
                }
                else {
                    return false;
                }
            }
            
        }
    }
    if(top == -1) return true;
    return false;
}