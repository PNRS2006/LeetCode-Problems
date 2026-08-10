class Solution {
public:
    string convert(string s, int n) {
        vector<string>v(n);
        if(n==1 || s.size()<=n) return s;
        int i=0;
        bool f=1;
        for(auto c : s){
            v[i]+=c;
            if(i==n-1) f=0;
            if(i==0) f=1;
            if(f) i++;
            else i--;
        }
        string t="";
        for(int i=0;i<n;i++) t+=v[i];
        return t;
    }
};