class Solution {
public:
    vector<string> topKFrequent(vector<string>& w, int k) {
        vector<string>c;
        unordered_map<string,int>m;
        for(string i : w) m[i]++;
        vector<pair<string,int>>p(m.begin(),m.end());
        sort(p.begin(),p.end() ,[](const pair<string,int>&a ,const pair<string,int>&b){
            if(a.second != b.second) return a.second>b.second;
            return a.first<b.first;
        });
        for(auto it=p.begin();it!=p.end() && k>0;it++){
            c.push_back(it->first);
            k--;
        }
        return c;
    }
};