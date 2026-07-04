class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& n) {
        map<int,int>m;
        vector<int>vi;
        set<int>s;
        int ki=0;
        for(int i : n) m[i]++;
        for(auto [k,v] : m){
            if(s.count(v)) continue;
            else{
                vi.push_back(k);
                s.insert(v);
                ki++;
            }
            if(ki==2) break;
        }
        vector<int>arr = {-1,-1};
        return (vi.size()==2)? vi : arr;
    }
};