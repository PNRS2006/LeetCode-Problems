class Solution {
public:
    int sumDivisibleByK(vector<int>& n, int k) {
        unordered_map<int,int>m;
        for(int i : n) m[i]++;
        int c=0;
        for(auto [ke,v] : m){
            if(v%k==0) c+=ke*v;
        }
        return c;
    }
};