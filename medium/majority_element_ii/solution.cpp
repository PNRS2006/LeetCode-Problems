class Solution {
public:
    vector<int> majorityElement(vector<int>& n) {
        unordered_map<int,int>m;
        for(int i : n) m[i]++;
        int l = n.size();
        vector<pair<int,int>>mp(m.begin(),m.end());
        sort(mp.begin(),mp.end(),[&](auto a , auto b){
            return a.second > b.second;
        });
        vector<int>lo;
        for(auto [k,v] : mp) if(v>(l/3)) lo.push_back(k);
        return lo;
    }
};