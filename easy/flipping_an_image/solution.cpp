class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& im) {
        int n=im.size();
        vector<vector<int>>a(n,vector<int>(n));
        for(int i=0;i<n;i++){
            int k=0;
            for(int j=n-1;j>=0;j--){
                a[i][k++]=im[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(a[i][j]==0) a[i][j]=1;
                else a[i][j]=0;
            }
        }
        return a;
    }
};