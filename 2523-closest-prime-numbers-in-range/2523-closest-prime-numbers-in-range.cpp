class Solution {
public:
    bool isp(int n){
        if(n<=1) return 0;
        if(n==2 || n==3) return 1;
        if(n%2==0 || n%3==0) return 0;
        for(int i=5;i*i<=n;i+=6) if(n%i==0 || n%(i+2)==0) return 0;
        return 1;
    }
    vector<int> closestPrimes(int l, int r) {
        vector<int>v;
        long long c=0;
        for(int i=l;i<=r;i++) {
            if(isp(i)) v.push_back(i);
        }
        if(v.size()<=1) return {-1,-1};
        int ii=-1,j=-1,mi=INT_MAX;
        for(int i=0;i<v.size()-1;i++){
            if(v[i+1]-v[i]<mi){
                mi = v[i+1]-v[i];
                ii=i;
                j=i+1;
            }
        }
        return {v[ii],v[j]};
    }
};