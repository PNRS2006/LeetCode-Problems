class Solution {
public:
    int earliestTime(vector<vector<int>>& t) {
        int c=INT_MAX;
        for(int i=0;i<t.size();i++){
            int d=0;
            for(int j=0;j<t[0].size();j++){
                d+=t[i][j];
            }
            c=min(c,d);
        }
        return c;
    }
};