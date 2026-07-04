class Solution {
public:
    int maxFrequencyElements(vector<int>& n) {
        unordered_map<int,int>v;
        for(int i : n) v[i]++;
        int m=INT_MIN,c=0;
        for(auto [k,va] : v) m=max(m,va);
        for(auto [k,va] : v) {
            if(va==m) c+=va;
        }
        return c;
    }
};