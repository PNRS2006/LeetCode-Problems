class Solution {
public:
    int minMoves2(vector<int>& v) {
        sort(v.begin(),v.end());
        int m = v[v.size()/2];
        int e=0;
        for(int i : v){
            e+=abs(m-i);
        }
        return e;
    }
};