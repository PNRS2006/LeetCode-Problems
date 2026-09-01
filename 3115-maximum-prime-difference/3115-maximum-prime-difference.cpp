class Solution {
public:
    bool isp(int n){
        if(n<=1) return 0;
        if(n==2 || n==3) return 1;
        if(n%2==0 || n%3==0) return 0;
        for(int i=5;i<=sqrt(n);i+=6){
            if(n%i==0 || n%(i+2)==0) return 0;
        }
        return 1;
    }
    int maximumPrimeDifference(vector<int>& n) {
        int i=0,j=0;
        for(int k=0;k<n.size();k++){
            if(isp(n[k])){
                i=k;
                break;
            }
        }
        for(int k=n.size()-1;k>=0;k--){
            if(isp(n[k])){
                j=k;
                break;
            }
        }
        return abs(i-j);
    }
};