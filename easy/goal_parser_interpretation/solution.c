char * interpret(char * c){
    char * b = (char*)malloc(strlen(c)+1*sizeof(char));
    int j=0;
    for(int i=0;i<strlen(c);i++)
    {
        if(c[i]=='(' && c[i+1]==')') b[j++]='o';
        else if(isalpha(c[i])) b[j++]=c[i];
    }
    b[j]='\0';
    return b;
}