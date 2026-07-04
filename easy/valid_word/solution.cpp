class Solution {
public:
    bool isValid(string s) {
        if(s.size()<3) return false;
        int c=0,v=0,d=0,u=0,l=0;
        for(char ch : s)
        {
            if(ch=='@' || ch=='$' || ch=='#') return false;
            if(isupper(ch)) u++;
            if(islower(ch)) l++;
            if(isalpha(ch))
            {
                char o=tolower(ch);
                if(o=='a' || o=='e' || o=='i' || o=='o' || o=='u') v++;
                else c++;
            }
            else if(isdigit(ch)) d++;
        }
        return c>0 && v>0;
    }
};