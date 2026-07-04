class Solution {
public:
    string makeSmallestPalindrome(string s) {
        if(s.size()<=1) return s;
        int i=-1,j=s.size();
        while(i<=j){
            i++;
            j--;
            if(s[i]==s[j]) continue;
            else if(s[i]!=s[j]){
                if(s[i]<s[j]) s[j]=s[i];
                else s[i]=s[j];
            }
        }
        return s;
    }
};