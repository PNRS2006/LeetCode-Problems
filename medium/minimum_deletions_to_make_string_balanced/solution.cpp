class Solution {
public:
    int minimumDeletions(string s) {
        int a=0 , b=0;
        for(char i : s) if(i=='a') a++;
        if(a==s.size() || a==0) return 0;
        int x = a;
        for(int i=0;i<s.size();i++){
            if(s[i]=='b') b++;
            if(s[i]=='a') a--;
            x = min(x , a+b);
        }
        return x;
    }
};