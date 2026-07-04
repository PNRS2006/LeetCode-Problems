class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& n) {
        vector<int>a(n.size());
        for(int i=0;i<n.size();i++){
            int x=0;
            while((x|x+1)!=n[i] && x<=n[i]) x++;
            if((x|x+1)==n[i]) a[i]=x;
            else a[i]=-1;
        }
        return a;
    }
};