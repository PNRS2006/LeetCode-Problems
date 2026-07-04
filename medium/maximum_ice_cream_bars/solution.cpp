class Solution {
public:
    int maxIceCream(vector<int>& c, int n) {
        sort(c.begin(),c.end());
        int i=0,f=0;
        while(i<c.size() && c[i]<=n && n>0){
            n-=c[i];
            i++;
        }
        return i;
    }
};