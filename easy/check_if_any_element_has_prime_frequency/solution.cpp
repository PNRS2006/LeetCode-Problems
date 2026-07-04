class Solution {
public:
    bool prime(int n){
        int c=0;
        for(int i=1;i<=n;i++){
            if(n%i==0) c++;
        }
        return c==2;
    }
    bool checkPrimeFrequency(vector<int>& n) {
        unordered_map<int,int>a;
        for(int i : n){
            a[i]++;
        }
        for(auto [key,val] : a){
            if(prime(val)) return true;
        }
        return false;
    }
};