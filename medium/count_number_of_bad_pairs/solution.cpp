class Solution {
public:
    long long countBadPairs(vector<int>& n) {
        long long c = 0;
        long long d = (n.size() *(n.size()-1))/2;
        int i=0 , j=1;
        unordered_map<int,int>m;
        for(int i=0;i<n.size();i++){
            m[n[i]-i]++;
        }
        for(auto [k,v] : m){
            if(v>1) c+=1ll*v*(v-1)/2;
        }
        long long e = d-c;
        return e;
    }
};