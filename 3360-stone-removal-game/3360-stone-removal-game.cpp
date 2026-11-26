class Solution {
public:
    bool canAliceWin(int n) {
        if(n<10) return 0;
        int k=10;
        bool a=0, b=0;
        while(n>=k){
            n-=k;
            k--;
            if(a==0){
                a=1;
                b=0;
            }
            else{
                a=0;
                b=1;
            }
        }
        return a==1;
    }
};