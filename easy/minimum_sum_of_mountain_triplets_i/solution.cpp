class Solution {
public:
    int minimumSum(vector<int>& n) {
        int c=INT_MAX;
        for(int i=0;i<n.size()-2;i++){
            for(int j=i+1;j<n.size()-1;j++){
                for(int k=j+1;k<n.size();k++){
                    if(n[j]>n[i] && n[j]>n[k] && (n[i]+n[j]+n[k]<c)) {
                        c=n[i]+n[j]+n[k];
                    }
                }
            }
        }
        if(c==INT_MAX) return -1;
        return c;
    }
};