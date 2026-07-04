class Solution {
public:
    string sortVowels(string s) {
        vector<char>a;
        vector<char>b;
        for(char i : s){
            if(i=='A' || i=='E' || i=='I' || i=='O' || i=='U') a.push_back(i);
            else if(i=='a' || i=='e' || i=='i' || i=='o' || i=='u') b.push_back(i);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        vector<char>c=b;
        c.insert(c.begin(),a.begin(),a.end());
        int i=0,j=0;
        while(i<s.size() && j<c.size()){
            if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                s[i++]=c[j++];
            }
            else i++;
        }
        return s;
    }
};