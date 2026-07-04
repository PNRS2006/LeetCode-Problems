char* removeDuplicates(char* s) {
    int n = strlen(s);
    char new_str[n];
    char *stack = (char *)malloc(n*sizeof(char)); 
    int top = -1;
    stack[++top] = s[0];
    for(int i=1;i<n;i++)
    {
        if(top != -1 && stack[top] == s[i]) 
        {
            top--;
        }
        else
        {
            stack[++top] = s[i];
        }
    }
    stack[++top] = '\0';
    return stack;
}