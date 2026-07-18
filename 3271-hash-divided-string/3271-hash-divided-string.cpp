class Solution {
public:
    string stringHash(string s, int k) {
        string t = "";
        for(int i=0;i<=s.size()-k;){
            string s1 = s.substr(i,k);
            int c=0;
            for(char l : s1) c+=l-97;
            t+='a' + (c%26);
            i+=k;
        }
        return t;
    }
};