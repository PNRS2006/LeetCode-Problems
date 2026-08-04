class Solution {
public:
    string convertDateToBinary(string d) {
        int i=0;
        string t="";
        while(i<d.size()){
            string s = "";
            while(i<d.size() && d[i]!='-') s+=d[i++];
            int k = stoi(s);
            string l="";
            while(k>0){
                l+=(k%2)+'0';
                k/=2;
            }
            reverse(l.begin(),l.end());
            t+=l;
            if(i<d.size()) t+=d[i];
            i++;
        }
        return t;
    }
};