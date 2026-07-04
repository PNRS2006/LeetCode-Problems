class Solution {
public:
    int minRemoval(vector<int>& n, int k) {
        sort(n.begin(),n.end());
        int x = 0;
        for(int i=0;i<n.size();i++){
            int a = upper_bound(n.begin()+i, n.end(), 1LL * n[i] * k) - n.begin()-1;
            x = max(x , a-i+1);
        }
        return n.size()-x;
    }
};