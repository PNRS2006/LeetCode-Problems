class Solution {
public:
    int minimumDifference(vector<int>& n, int k) {
        sort(n.begin(),n.end());
        int a = INT_MAX;
        for(int i=0;i<=n.size()-k;i++){
            int ma = 0;
            int mi = INT_MAX;
            for(int j=i;j<k+i;j++){
                ma = max(ma , n[j]);
                mi = min(mi , n[j]);
            }
            a = min(a , ma-mi);
        }
        return a;
    }
};