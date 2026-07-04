class Solution {
public:
    string removeDigit(string n, char d) {
        string s="";
        for(int i=0;i<n.size();i++){
            if(n[i]==d){
                string st = n.substr(0,i)+n.substr(i+1,n.size());
                if(st>s) s=st;
            }
        }
        return s;
    }
};