class Solution {
public:
    int maximumStrongPairXor(vector<int>& n) {
        int k=0;
        for(int i=0;i<n.size()-1;i++){
            for(int j=i+1;j<n.size();j++){
                if(abs(n[i]-n[j])<=min(n[i],n[j])){
                    int x = n[i]^n[j];
                    k = max(k,x);
                }
            }
        }
        return k;
    }
};