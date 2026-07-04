class Solution {
public:
    string frequencySort(string s) {
        string t="";
        unordered_map<char,int>m;
        for(char i : s) m[i]++;
        vector<pair<int,char>>v;
        for(auto [k,vi] : m) v.push_back({vi,k});
        sort(v.rbegin(),v.rend());
        for(auto &p : v){
            while(p.first--) t+=p.second;
        }
        return t;
    }
};