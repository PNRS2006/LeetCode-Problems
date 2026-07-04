class Solution {
public:
    string destCity(vector<vector<string>>& p) {
        for(int i=0;i<p.size();i++){
            string s = p[i][1];
            bool found = false;
            for(int j=0;j<p.size();j++) if(p[j][0]==s) found = true;
            if(!found) return s;
        }
        return p[p.size()-1][1];
    }
};