class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& g) {
        vector<vector<int>>a;
        for(int i=0;i<g.size();i++){
            int b=g[i];
            vector<int>v;
            for(int j=0;j<b;j++){
                int c=find(g.begin(),g.end(),b)-g.begin();
                v.push_back(c);
                g[c]=0;
            }
            if(v.size()>0) a.push_back(v);
        }
        return a;
    }
};