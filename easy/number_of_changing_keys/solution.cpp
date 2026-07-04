class Solution {
public:
    int countKeyChanges(string s) {
        int c=0;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            s[i]=tolower(s[i]);
        }
        for(int i=0;i<n-1;i++)
        {
            if(s[i]!=s[i+1]) c++;
        }
        return c;
    }
};