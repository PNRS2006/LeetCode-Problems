class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& n) {
        vector<bool>a;
        int c=0;
        for(int i : n){
            c=((c<<1)+i)%5;
            a.push_back(c==0);
        }
        return a;
    }
};