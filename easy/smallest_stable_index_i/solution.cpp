class Solution {
public:
    int firstStableIndex(vector<int>& n, int k) {
        int l=INT_MAX;
        int k1=-1;
        for(int i=0;i<n.size();i++){
            int a = *max_element(n.begin(),n.begin()+i);
            int b = *min_element(n.begin()+i,n.end());
            if(a-b <= k && a-b<l) return i;
        }
        return -1;
    }
};