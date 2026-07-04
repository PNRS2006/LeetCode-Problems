class Solution {
public:
    int minimumDistance(vector<int>& n) {
        map<int, vector<int>> pos;
        for (int i = 0; i < (int)n.size(); ++i)
            pos[n[i]].push_back(i);

        int ans = INT_MAX;
        for (auto &p : pos) {
            auto &idx = p.second;
            if (idx.size() < 3) continue;
            for (int i = 0; i + 2 < (int)idx.size(); ++i) {
                ans = min(ans, 2 * (idx[i + 2] - idx[i]));
            }
        }
        return ans == INT_MAX ? -1 : ans;
    }
};
