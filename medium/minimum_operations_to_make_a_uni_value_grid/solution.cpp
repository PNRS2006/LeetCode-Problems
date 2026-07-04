class Solution {
public:
    int minOperations(vector<vector<int>>& g, int x) {
        vector<int>v;
        for(auto &val : g){
            for(auto &k : val) v.push_back(k);
        }
        sort(v.begin(),v.end());
        int a = v[0]%x;
        int c=0;
        for(int i : v) if(i%x==a) c++;
        int m = v[v.size()/2];
        if(c!=v.size()) return -1;

        int e=0;
        for(int i : v){
            e+=abs(m-i)/x;
        }
        return e;
    }
};