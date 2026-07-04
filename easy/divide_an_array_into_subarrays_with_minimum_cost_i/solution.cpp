class Solution {
public:
    int minimumCost(vector<int>& n) {
        sort(n.begin()+1,n.end());
        return n[0]+n[1]+n[2];
    }
};