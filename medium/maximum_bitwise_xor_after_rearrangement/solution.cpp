class Solution {
public:
    string maximumXor(string s, string t) {
        int t1=0 , t2=0;
        for(int i=0;i<t.size();i++){
            if(t[i]=='1') t2++;
            else t1++;
        }
        string f="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                if(t2>0){
                    f+='1';
                    t2--;
                }
                else{
                    f+='0';
                    t1--;
                }
            }
            else{
                if(t1>0){
                    f+='1';
                    t1--;
                }
                else{
                    f+='0';
                    t2--;
                }
            }
        }
        return f;
    }
};