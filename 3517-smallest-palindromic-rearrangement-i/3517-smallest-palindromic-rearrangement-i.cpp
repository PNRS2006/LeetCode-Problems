class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int>c(26,0);
        for(char i : s) c[i-'a']++;
        string t="";
        bool f=0;
        char l;
        for(int i=0;i<26;i++){
            char k = i+'a';
            if(c[i]%2!=0) {
                f=1;
                l=i+'a';
            }
            int n = c[i]/2;
            while(n--) t+=k;
        }
        if(f) t+=l;
        for(int i=25;i>=0;i--){
            char k = i+'a';
            int n = c[i]/2;
            while(n--) t+=k;
        }
        return t;
    }
};