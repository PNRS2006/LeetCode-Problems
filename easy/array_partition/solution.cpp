class Solution {
public:
    int arrayPairSum(vector<int>& n) {
        sort(n.begin(),n.end());
        int c=0;
        for(int i=0;i<n.size();i=i+2){
            c+=n[i];
        }
        return c;
    }
};