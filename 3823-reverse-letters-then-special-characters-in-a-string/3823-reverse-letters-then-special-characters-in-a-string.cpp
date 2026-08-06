class Solution {
public:
    string reverseByType(string s) {
        string l="", sp="";
        for(char i : s){
            if(i>='a' && i<='z') l+=i;
            else sp+=i;
        }
        reverse(l.begin(),l.end());
        reverse(sp.begin(),sp.end());
        int i=0,j=0;
        for(char &k : s){
            if(k>='a' && k<='z') k=l[i++];
            else k=sp[j++];
        }
        return s;
    }
};