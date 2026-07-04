class Solution {
public:
    long long minCost(string s, vector<int>& co) {
        unordered_map<char,long long>sm;
        long long e=0;
        for(int i=0;i<s.size();i++){
            sm[s[i]] += co[i];
            e += co[i];
        }
        long long mx=0;
        for(auto &p : sm){
            mx = max(mx , p.second);
        }
        long long m_s = e-mx;
        return m_s;
    }
};