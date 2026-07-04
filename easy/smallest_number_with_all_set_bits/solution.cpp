class Solution {
public:
    int smallestNumber(int n) {
        int c=0;
        while(n){
            n>>=1;
            c++;
        }
        int d=0,e=0;
        while(c>0){
            e+=pow(2,d++);
            c--;
        }
        return e;
    }
};