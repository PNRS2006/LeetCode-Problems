class Solution {
public:
    bool partitionArray(vector<int>& n, int k) {
        if(n.size()%k!=0) return false;
        unordered_map<int,int>a;
        int c=0;
        for(int i : n){
            a[i]++;
            c=max(c,a[i]);
        }
        return c*k<=n.size();
        return false;
    }
};