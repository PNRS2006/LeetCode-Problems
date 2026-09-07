class Solution {
public:
    int minFlips(int a, int b, int c) {
        int k = (a|b);
        int l=0;
        while(c || a || b){
            int cnt=0;
            if(a&1) cnt++;
            if(b&1) cnt++;
            if(!(c&1) && cnt>0) l+=cnt;
            if((c&1) && cnt==0) l++;
            a>>=1;
            b>>=1;
            c>>=1;
        }
        return l;
    }
};