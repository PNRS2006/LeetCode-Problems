class Solution {
public:
    int fun(int n){
        int c=0;
        while(n>1){
            if(n%2==0) n/=2;
            else n = (n*3)+1;
            c++;
        }
        return c;
    }
    int getKth(int lo, int hi, int k) {
        vector<int>v;
        for(int i=lo;i<=hi;i++) v.push_back(fun(i));
        vector<pair<int,int>>p;
        for(int i=0;i<v.size();i++) p.push_back({lo++,v[i]});
        sort(p.begin(),p.end(),[](auto a,auto b){
            if(a.second == b.second) return a.first<b.first;
            return a.second < b.second;
        });
        // for(auto &l : p) cout << l.first << " " << l.second << endl;
        return p[k-1].first;
    }
};