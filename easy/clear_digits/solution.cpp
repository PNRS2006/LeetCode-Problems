class Solution {
public:
    string clearDigits(string s) {
        string a="";
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]>='0' && s[i]<='9') a.pop_back();
            else a+=s[i];
        }
        return a;
    }
};