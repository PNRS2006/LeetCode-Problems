class Solution {
public:
    bool isp(int n){
        if(n<=1) return 0;
        if(n==2 || n==3) return 1;
        if(n%2==0 || n%3==0) return 0;
        for(int i=5;1LL*i*i<=n;i+=6) if(n%i==0 || n%(i+2)==0) return 0;
        return 1;
    }
    long long ispal(int n){
        long long res = n;
        n /= 10;
        while (n > 0) {
            res = res * 10 + n % 10;
            n /= 10;
        }
        return res;
    }
    int primePalindrome(int n) {
        if(n<=11){
            if(n<=2) return 2;
            if(n<=3) return 3;
            if(n<=5) return 5;
            if(n<=7) return 7;
            return 11;
        }
        for(int i=10;i<=100000;i++) {
            long long k = ispal(i);
            if(k>=n && isp(k)) return k;
        }
        return 0;
    }
};