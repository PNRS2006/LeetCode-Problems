class Solution {
public:
    bool is_p(int n){
        if(n <= 1) return false;
        if(n <= 3) return true;
        if(n % 2 == 0 || n % 3 == 0) return false;

        for(long long i = 5; i * i <= n; i += 6){
            if(n % i == 0 || n % (i + 2) == 0) return false;
        }
        return true;
    }
    bool completePrime(int num) {
        string s = to_string(num);
        int n = s.size();

        for(int i = 1; i <= n; i++){
            int pref = stoi(s.substr(0, i));
            if(!is_p(pref)) return false;
        }
        for(int i = 0; i < n; i++){
            int suff = stoi(s.substr(i));
            if(!is_p(suff)) return false;
        }

        return true;
    }
};