class Solution {
public:
    int alternatingSum(vector<int>& n) {
        int c=0;
        for(int i=0;i<n.size();i++){
            if(i%2==0) c+=n[i];
            else c-=n[i];
        }
        return c;
    }
};