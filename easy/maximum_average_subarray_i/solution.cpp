class Solution {
public:
    double findMaxAverage(vector<int>& n, int k) {
        int s=0;
        for(int i=0;i<k;i++) s+=n[i];
        int ms=s;
        for(int i=k;i<n.size();i++){
            s+=n[i];
            s-=n[i-k];
            ms = max(s,ms);
        }
        return (double)ms/k;
    }
};