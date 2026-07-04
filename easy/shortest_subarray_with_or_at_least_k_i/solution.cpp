class Solution {
public:
    int minimumSubarrayLength(vector<int>& n, int k) {
        int l = 0;
        int c = INT_MAX;
        for(int i=0;i<n.size();i++){
            int m=0;
            for(int j=i;j<n.size();j++){
                m=m|n[j];
                if(m>=k){
                    c=min(c,j-i+1);
                    break;
                }
            }
        }
        return (c==INT_MAX)? -1 : c;
    }
};