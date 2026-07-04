class Solution {
public:
    int getLeastFrequentDigit(int n) {
        vector<int>a;
        while(n>0){
            a.push_back(n%10);
            n/=10;
        }
        int g=INT_MAX,h=INT_MAX;
        unordered_map<int,int>f(n);
        for(int i : a) f[i]++;
        for(auto [k,v] : f){
            if(v<g) g=v;
        }
        for(auto [k,v] : f){
            if(v==g && k<h) h=k;
        }
        return h;
    }
};