class Solution {
public:
    vector<int> topKFrequent(vector<int>& n, int k) {
        vector<int>r;
        unordered_map<int,int>m;
        for(auto i : n){
            m[i]++;
        }
        multimap<int,int,greater<int>>a;
        for(auto i : m){
            a.insert({i.second,i.first});
        }
        int c=0;
           for(auto it = a.begin(); it != a.end() , k>0  ; it++ , k --){
                r.push_back(it->second);
            }
        
        return r;
    }
};