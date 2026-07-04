class Solution {
public:
    long long getDescentPeriods(vector<int>& p) {
        long long c = 1;
        long long m = 1;
        int n = p.size();
        for(int i = 1; i < n; i++) {
            if(p[i-1] - p[i] == 1) {
                c++;
            } else {
                c = 1;
            }
            m += c;
        }
        return m;
    }
};