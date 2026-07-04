class Solution {
public:
    string strWithout3a3b(int a, int b) {
        string s="";
        while(a>0 || b>0){
            if(s.size()>=2 && s.back()=='a' && s[s.size()-2]=='a'){
                s+='b';
                b--;
            }
            else if(s.size()>=2 && s.back()=='b' && s[s.size()-2]=='b'){
                s+='a';
                a--;
            }
            else if(a>b){
                s+='a';
                a--;
            }
            else {
                s+='b';
                b--;
            }
        }
        return s;
    }
};