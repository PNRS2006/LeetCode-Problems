class Solution {
public:
    int fun(int n) {
        if (n < 2) return -1;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) return -1;
        }
        return 1;
    }

    long long splitArray(vector<int>& n) {
        long long a = 0, b = 0;
        for (int i = 0; i < n.size(); i++) {
            if (fun(i) == 1) a += n[i];
            else b += n[i];
        }
        return abs(a - b);
    }
};
