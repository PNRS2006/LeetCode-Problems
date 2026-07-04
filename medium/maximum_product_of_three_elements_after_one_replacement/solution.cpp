class Solution {
public:
    long long maxProduct(vector<int>& n) {
        long long a3 = 1LL * (*min_element(n.begin(), n.end())) * (*max_element(n.begin(), n.end()));
        sort(n.begin(), n.end());
        long long a1 = 1LL * n[0] * n[1];
        sort(n.rbegin(), n.rend());
        long long a2 = 1LL * n[0] * n[1];
        vector<long long> v;
        v.push_back(a1);
        v.push_back(a2);
        v.push_back(a3);
        long long e1 = *min_element(v.begin(), v.end());
        long long e2 = *max_element(v.begin(), v.end());
        if (e1 < 0) e1 = e1 * -100000;
        else e1 = e1 * 100000;
        if (e2 < 0) e2 = e2 * -100000;
        else e2 = e2 * 100000;
        return max(e1, e2);
    }
};
