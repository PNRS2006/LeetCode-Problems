class Solution {
public:
    int gcd(int a,int b){
        if(b==0) return a;
        return gcd(b,a%b);
    }
    int gcdOfOddEvenSums(int n) {
        int e=0,o=0;
        for(int i=1;i<=2*n;i++){
            if(i%2==0) e+=i;
            else o+=i;
        }
        cout << o << " " << e;
        return gcd(o,e);
    }
};