class Solution {
public:
    int longestPalindrome(string s) {
        if(s.size()<=1) return s.size();
        int c=0,d=0;
        unordered_map<char,int>a;
        for(char ch : s){
            a[ch]++;
        }
        bool odd = false;
        for(auto [key,val] : a){
            c+=(val/2)*2;
            if(val%2==1) odd=true;
        }
        if(odd) return c+1;
        return c;
    }
};