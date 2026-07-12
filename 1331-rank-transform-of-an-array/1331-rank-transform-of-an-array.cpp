class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& a) {
        vector<int>v=a;
        sort(v.begin(),v.end());
        unordered_map<int,int>m;
        int k=1;
        for(int i=0;i<v.size();i++) {
            if(!m[v[i]]) m[v[i]]=k++;
        }
        for(int i=0;i<a.size();i++) a[i]=m[a[i]];
        return a;
    }
};