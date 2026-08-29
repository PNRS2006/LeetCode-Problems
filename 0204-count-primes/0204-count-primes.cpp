class Solution {
public:
    int countPrimes(int n) {
        if(n<=2) return 0;
        vector<bool>prime(n,1);
        prime[0] = prime[1] = 0; 
        int c=n/2;
        for(int i=3;i*i<n;i+=2){
            if(prime[i]){
                for(int j=i*i;j<n;j+=2*i) {
                    if(prime[j]){
                        prime[j]=0;
                        c--;
                    }
                }
            }
        }
        return c;
    }
};