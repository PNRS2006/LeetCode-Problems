class Solution {
public:
    vector<int> rearrangeArray(vector<int>& n) {
        vector<int>ne(n.size());
        int l=0 , r=1;
        for(int i : n){
            if(i>0){
                ne[l]=i;
                l+=2;
            }
            else{
                ne[r]=i;
                r+=2;
            }
        }
        return ne;
    }
};