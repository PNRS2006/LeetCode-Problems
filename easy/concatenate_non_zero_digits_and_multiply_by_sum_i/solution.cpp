class Solution {
public:
    long long sumAndMultiply(int n) {
        string s = "";
        while (n) {
            int d = n % 10;
            if (d != 0) s += char(d + '0');
            n /= 10;
        }
        long long a=0;
        long long b=0;
        reverse(s.begin(),s.end());
        for(char i : s){
            a=(a*10)+(i-'0');
            b+=(i-'0');
        }
        long long c = a*b;
        return c;
    }
};