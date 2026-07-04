class Solution {
public:
    int getMinDistance(vector<int>& n, int t, int s) {
        int k=INT_MAX;
        for(int i=0;i<n.size();i++){
            if(n[i]==t){
                if(abs(i-s)<k) k=abs(i-s);
            }
        }
        return k;
    }
};