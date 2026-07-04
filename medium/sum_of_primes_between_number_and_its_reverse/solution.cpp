class Solution {
public:
    bool prime(int n){
        if(n<=1) return 0;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0) return 0;
        }
        return 1;
    }
    int sumOfPrimesInRange(int n) {
        int r=0;
        int a=n;
        while(a>0){
            r=r*10+(a%10);
            a/=10;
        }
        int s=0;
        int k1=min(n,r);
        int k2=max(n,r);
        for(int i=k1;i<=k2;i++){
            if(prime(i)) s+=i;
        }
        return s;
    }
};