class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        string m = s[0];
        string s1=s[0];
        for(int i=1;i<s.size();i++){
            string c="";
            string s2=s[i];
            int j=0 , k=0;
            while(j<s1.size() && k<s2.size() && s1[j]==s2[k]){
                c+=s1[j];
                j++;
                k++;
            }
            if(c.size()<m.size()) m=c;
        }
        return m;
    }
};