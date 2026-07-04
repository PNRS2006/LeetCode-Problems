class Solution {
public:
    bool isPrime(long long n){
        if(n <= 1) return false;
        if(n <= 3) return true;
        if(n % 2 == 0 || n % 3 == 0) return false;
        for(long long i = 5; i * i <= n; i += 6)
            if(n % i == 0 || n % (i + 2) == 0) return false;
        return true;
    }

    int largestPrime(int n) {
        int latrevison = n;
        vector<int> primes;
        vector<bool> sieve(n + 1, true);
        sieve[0] = sieve[1] = false;
        for(int i = 2; i <= n; i++){
            if(sieve[i]){
                primes.push_back(i);
                if((long long)i * i <= n)
                    for(long long j = 1LL * i * i; j <= n; j += i)
                        sieve[j] = false;
            }
        }

        long long sum = 0;
        int ans = 0;
        for(int p : primes){
            sum += p;
            if(sum > latrevison) break;
            if(isPrime(sum)) ans = sum;
        }
        return ans;
    }
};
