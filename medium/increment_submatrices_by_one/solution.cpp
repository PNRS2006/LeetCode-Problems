class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& q) {
        vector<vector<int>>v(n,vector<int>(n));
        int k=0;
        while(k<q.size()){
            int r1=q[k][0] , c1=q[k][1] , r2=q[k][2] , c2=q[k][3];
            v[r1][c1]++;
            if(r1<n && c2+1<n) v[r1][c2+1]--;
            if(r2+1<n) v[r2+1][c1]--;
            if(r2+1<n && c2+1<n) v[r2+1][c2+1]++;
            k++;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i>0) v[i][j]+=v[i-1][j];
                if(j>0) v[i][j]+=v[i][j-1];
                if(i>0 && j>0) v[i][j]-=v[i-1][j-1];
            }
        }
        return v;
    }
};