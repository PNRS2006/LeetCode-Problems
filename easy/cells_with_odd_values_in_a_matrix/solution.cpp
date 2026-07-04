class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& i) {
        vector<vector<int>>a(m,vector<int>(n,0));
        int c=0;
        for(int j=0;j<i.size();j++){
            int d=i[j][0],e=i[j][1];
            for(int o=0;o<n;o++){
                a[d][o]++;
            }
            for(int l=0;l<m;l++){
                a[l][e]++;
            }
        }
        for(int j=0;j<m;j++){
            for(int k=0;k<n;k++){
                if(a[j][k]%2!=0) c++;
            }
        }
        return c;
    }
};