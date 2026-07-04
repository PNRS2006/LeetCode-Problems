int evalRPN(char** t, int n) {
	int stack[10000];
	int top=-1;
	int i;
	for(i=0;i<n;i++)
	{
		char ch = t[i][0];
        int s = strlen(t[i]);
		if((ch=='+' || ch=='-' || ch=='*' || ch=='/') && s==1)
		{
			int op2=stack[top--];
			int op1=stack[top--];
			int res;
			if(ch == '+') res = op1 + op2;
			else if(ch == '-') res = op1 - op2;
			else if(ch == '*') res = op1*op2;
			else res = op1/op2;
			stack[++top] = res;
		}
		else
		{
			stack[++top] = atoi(t[i]);
		}
	}
	return stack[top];
}