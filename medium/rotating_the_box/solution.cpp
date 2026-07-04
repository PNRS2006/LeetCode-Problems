class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& b) {
        int m = b.size();
        int n = b[0].size();
        vector<vector<char>>v(n,vector<char>(m));
        for(int i=0;i<m;i++){
            int e=n-1;
            for(int j=n-1;j>=0;j--){
                if(b[i][j]=='*') e=j-1;
                else if(b[i][j]=='#') {
                    swap(b[i][j],b[i][e]);
                    e--;
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                v[j][m-i-1]=b[i][j];
            }
        }
        return v;
    }
};