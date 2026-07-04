class Solution {
public:
    int findJudge(int n, vector<vector<int>>& t) {
        if(n==1) return 1;
        vector<int>in(n+1,0);
        vector<int>out(n+1,0);
        for(int i=0;i<t.size();i++){
            in[t[i][1]]++;
            out[t[i][0]]++;
        }
        for(int i=1;i<=n;i++) if(out[i]==0 && in[i]==n-1) return i;
        return -1;
    }
};