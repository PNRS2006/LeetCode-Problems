class Solution {
public:
    bool checkOnesSegment(string s) {
        int c=0 , f=0 , k=0;
        for(int i : s) if(i=='1') c++;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1') k++;
            else k=0;
            f=max(k,f);
        }
        return f==c;
    }
};