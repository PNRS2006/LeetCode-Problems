class Solution {
public:
    int fun(int n){
        int c=0;
        while(n){
            if(n&1) c++;
            n>>=1;
        }
        return c;
    }
    vector<int> sortByBits(vector<int>& a) {
        vector<pair<int,int>>p;
        for(int i : a) p.push_back({i,fun(i)});
        sort(p.begin(),p.end(),[](auto a,auto b){
            if(a.second==b.second) return a.first<b.first;
            return a.second<b.second;
        });
        vector<int>v;
        for(auto &k : p) v.push_back(k.first);
        return v;
    }
};