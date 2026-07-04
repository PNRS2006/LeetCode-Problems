class Solution {
public:
    int countGoodSubstrings(string s) {
        int n=s.size();
        if(n<3) return 0;
        int c=0;
        for(int i=0;i<n-2;i++)
        {
            if(s[i]!=s[i+1] && s[i+1]!=s[i+2] && s[i+2]!=s[i]) c++;
        }
        return c;
    }
};