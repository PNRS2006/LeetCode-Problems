class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& m) {
        int c=0 ;
        long long sum=0;
        int a=INT_MAX;
        for(int i=0;i<m.size();i++){
            for(int j=0;j<m[0].size();j++){
                sum+=abs(m[i][j]);
                if(m[i][j]<0) c++;
                a = min(a,abs(m[i][j]));
            }
        }
        if(c%2!=0) sum=sum-(2LL*a);
        return sum;
    }
};