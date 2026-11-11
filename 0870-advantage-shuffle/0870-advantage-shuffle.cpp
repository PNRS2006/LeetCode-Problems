class Solution {
public:
    vector<int> advantageCount(vector<int>& n1, vector<int>& n2) {
        sort(n1.begin(),n1.end());
        int l=0, r=n1.size()-1;
        vector<pair<int,int>>v;
        for(int i=0;i<n1.size();i++) v.push_back({n2[i],i});
        sort(v.rbegin(),v.rend());
        vector<int>ne(n1.size());
        for(int i=0;i<n1.size();i++){
            if(v[i].first<n1[r]) ne[v[i].second]=n1[r--];
            else ne[v[i].second]=n1[l++];
        }
        return ne;
    }
};