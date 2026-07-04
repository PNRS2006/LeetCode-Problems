class Solution {
public:
    vector<vector<int>> fun(vector<vector<int>>& m){
        vector<vector<int>>k(m.size(),vector<int>(m.size()));
        for(int i=0;i<m.size();i++){
            int n=m.size()-1;
            for(int j=0;j<m.size();j++){
                k[i][j] = m[n--][i];
            }
        }
        return k;
    }
    bool findRotation(vector<vector<int>>& m, vector<vector<int>>& t) {
        if(m==t) return true;
        int k=3;
        while(k--){
            if(fun(m) == t) return true;
            else m=fun(m);
        }
        return false;
    }
};