class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& d) {
        long long a=LLONG_MIN;
        int m=0,n=0;
        for(int i=0;i<d.size();i++){
            int g=d[i][0],h=d[i][1];
            long long diag=(1LL*g*g)+(1LL*h*h);
            long long area=1LL*g*h;
            if(diag>a || (diag==a && area>=1LL*m*n)){
                a=diag;
                m=g;
                n=h;
            }
        }
        return m*n;
    }
};