class Solution {
public:
    string addBinary(string a, string b) {
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());

        int n = a.size(), m = b.size();
        if (n < m) a += string(m - n, '0');
        else if (m < n) b += string(n - m, '0');

        int i=0,j=0;
        string s = "";
        int c=0;
        while(i<a.size() || j<b.size() || c>0){
            if(a[i]=='0' && b[j]=='0'){
                if(c==0) s+='0';
                else{
                    s+='1';
                    c=0;
                }
                i++;
                j++;
            }
            else if((a[i]=='1' && b[j]=='0') || (a[i]=='0' && b[j]=='1')){
                if(c==0) s+='1';
                else{
                    s+='0';
                    c=1;
                }
                i++;
                j++;
            }
            else if(a[i]=='1' && b[j]=='1'){
                if(c==0){
                    s+='0';
                    c=1;
                }
                else{
                    s+='1';
                    c=1;
                }
                i++;
                j++;
            }
            else if(i==a.size() && j==b.size() && c>0){
                s+='1';
                c=0;
            }
        }
        reverse(s.begin(),s.end());
        return s;
    }
};