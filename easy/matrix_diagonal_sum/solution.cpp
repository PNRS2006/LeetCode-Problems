class Solution {
public:
    int diagonalSum(vector<vector<int>>& m) {
        int s=0;
        int n=m.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j || (i+j)==n-1) s+=m[i][j];
            }
        }
        return s;
    }
};