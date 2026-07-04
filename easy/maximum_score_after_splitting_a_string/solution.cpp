class Solution {
public:
    int maxScore(string s) {
        int n = s.size();
        vector<int> pref(n);
        int zeros = 0, ones = 0;
        if (s[0] == '0') zeros = 1;
        pref[0] = zeros;

        for (int i = 1; i < n; i++) {
            if (s[i] == '0') zeros++;
            pref[i] = zeros;
        }

        for (char c : s) if (c == '1') ones++;

        int m = INT_MIN,ro=ones;
        for(int i=0; i<n-1 ;i++){
            if(s[i]=='1') ro--;
            int d = ro+pref[i];
            m = max(m,d);
        }
        return m;
    }
};