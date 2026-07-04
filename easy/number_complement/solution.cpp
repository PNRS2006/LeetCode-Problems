class Solution {
public:
    int findComplement(int num) {
        string s = "";
        int n=0,c=0;
        while(num>0){
            char a;
            if(num&1) a='0';
            else a='1';
            s+=a;
            num>>=1;
            n+=(a-'0')*pow(2,c++);
        }
        return n;
    }
};