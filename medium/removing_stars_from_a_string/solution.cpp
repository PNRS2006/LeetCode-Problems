class Solution {
public:
    string removeStars(string s) {
        string a="";
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='*') a.pop_back();
            else a+=s[i];
        }
        return a;
    }
};