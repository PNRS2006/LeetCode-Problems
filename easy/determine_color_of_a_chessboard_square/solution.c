bool squareIsWhite(char* s) {
    int i;
    if(s[i]=='a')
    {
        int n = s[1]-'0';
        if(n%2==0) return true;
    }
    else if(s[i]=='b')
    {
        int n = s[1]-'0';
        if(n%2!=0) return true;
    }
    else if(s[i]=='c')
    {
        int n = s[1]-'0';
        if(n%2==0) return true;
    }
    else if(s[i]=='d')
    {
        int n = s[1]-'0';
        if(n%2!=0) return true;
    }
    else if(s[i]=='e')
    {
        int n = s[1]-'0';
        if(n%2==0) return true;
    }
    else if(s[i]=='f')
    {
        int n = s[1]-'0';
        if(n%2!=0) return true;
    }
    else if(s[i]=='g')
    {
        int n = s[1]-'0';
        if(n%2==0) return true;
    }
    else if(s[i]=='h')
    {
        int n = s[1]-'0';
        if(n%2!=0) return true;
    }
    return false;
}