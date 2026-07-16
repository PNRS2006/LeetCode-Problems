class Solution {
public:
    long long gcdSum(vector<int>& n) {
        vector<int>pG(n.size());
        long long mx=0 , c=0;
        for(int i=0;i<n.size();i++){
            if(n[i]>mx) mx=n[i];
            pG[i] = gcd(n[i],mx);
        }
        sort(pG.begin(),pG.end());
        int i=0 , j=pG.size()-1;
        while(i<j){
            c += gcd(pG[i++],pG[j--]);
        }
        return c;
    }
};