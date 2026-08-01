class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& p) {
        unordered_map<int,vector<int>>m;
        for(auto &i : p){
            m[i[0]].push_back(i[1]);
        }
        vector<pair<int,int>>pi;
        for(auto [k,v] : m){
            unordered_map<int,int>mi;
            for(int i : v) mi[i]++;
            int li=0;
            for(auto [ki,vi] : mi) li = max(li,vi);
            pi.push_back({k,li});
        }
        int cnt=0;
        for(auto &i : pi) if(i.first < i.second) cnt++;
        return cnt;
    }
};