class Solution {
public:
    string reverseVowels(string s) {
        vector<char>v;
        for(char i : s) if(i=='a' || i=='e' || i=='i' || i=='o' || i=='u' || i=='A' || i=='E' || i=='I' || i=='O' || i=='U') v.push_back(i);
        reverse(v.begin(),v.end());
        int j=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U') s[i] = v[j++];       
        }
        return s;
    }
};