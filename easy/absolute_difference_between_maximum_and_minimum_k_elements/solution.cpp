class Solution {
public:
    int absDifference(vector<int>& n, int k) {
        sort(n.begin(),n.end());
        int i=0,j=n.size()-1;
        int c=0,d=0;
        while(k--){
            c+=n[i++];
            d+=n[j--];
        }
        return abs(c-d);
    }
};