class Solution {
public:
    vector<int> replaceNonCoprimes(vector<int>& n) {
        vector<int>v;
        for(int i : n){
            while(!v.empty()){
                int g = gcd(v.back(),i);
                if(gcd(v.back(),i)==1) break;
                long long l= 1ll*v.back()*i/g;
                v.pop_back();
                i=l;
            }
            v.push_back(i);
        }
        return v;
    }
};