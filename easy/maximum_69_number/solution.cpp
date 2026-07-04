class Solution {
public:
    int maximum69Number (int num) {
        string a = to_string(num);
        for(int i=0;i<a.size();i++){
            if(a[i]=='6') {
                a[i]='9';
                break;
            }
        }
        int c=0;
        for(char i : a) c=c*10+i-'0';
        return c;
    }
};