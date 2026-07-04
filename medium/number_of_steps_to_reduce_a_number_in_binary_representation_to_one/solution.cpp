class Solution {
public:
    string fun(string &s){
        int i=s.size()-1;
        while(i>=0 && s[i]!='0'){
            s[i]='0';
            i--;
        }
        if(i>=0) s[i]='1';
        else s = '1'+s;
        return s;
    }
    int numSteps(string s) {
        int c=0;
        while(s!="1"){
            if(s.back()=='0') s.pop_back();
            else s=fun(s);
            c++;
        }
        return c;
    }
};