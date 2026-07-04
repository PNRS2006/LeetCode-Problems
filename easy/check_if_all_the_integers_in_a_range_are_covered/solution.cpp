class Solution {
public:
    bool isCovered(vector<vector<int>>& r, int l, int ri) {
        vector<int>v;
        for(int i=0;i<r.size();i++){
            for(int j=0;j<r[0].size();j++){
                for(int k=r[i][0];k<=r[i][1];k++) v.push_back(k);
            }
        }
        for(int i=l;i<=ri;i++){
            if(find(v.begin(),v.end(),i) != v.end()) continue;
            else return false;
        }
        return true;
    }
};