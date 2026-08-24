class Solution {
public:
    bool isp(int n){
        if(n<=1) return 0;
        if(n==2 || n==3) return 1;
        if(n%2==0 || n%3==0) return 0;
        for(int i=5;i*i<=n;i+=6){
            if(n%i==0 || n%(i+2)==0) return 0;
        }
        return 1;
    }
    int diagonalPrime(vector<vector<int>>& n) {
        int m=0;
        int i=0,j=n[0].size()-1;
        for(int k=0;k<n.size();k++){
            if(isp(n[k][i])) m=max(m,n[k][i]);
            if(isp(n[k][j])) m=max(m,n[k][j]);
            i++;
            j--;
        }
        return m;
    }
};