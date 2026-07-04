class Solution {
public:
    int residuePrefixes(string s) {
        vector<int>f(26,0);
        int d=0,a=0;
        for(int i=0;i<s.size();i++){
            if(f[s[i]-'a']==0) d++;
            f[s[i]-'a']++;
            if(d==(i+1)%3) a++;
        }
        return a;
    }
};