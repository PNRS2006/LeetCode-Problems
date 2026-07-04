class Solution {
public:
    int countWords(vector<string>& w1, vector<string>& w2) {
        int c = 0;
        unordered_map<string ,pair<int, int>> m;
        for(auto &i : w1) m[i].first++;
        for(auto &i : w2) m[i].second++;
        for(auto [k,v] : m){
            if(v.first == v.second && v.first == 1) c++;
        }
        return c;
    }
};