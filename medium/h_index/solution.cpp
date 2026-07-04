class Solution {
public:
    int hIndex(vector<int>& c) {
        sort(c.rbegin(),c.rend());
        int x=0;
        for(int i=0;i<c.size();i++){
            if(c[i]>=i+1) x = max(x,i+1);
        }
        return x;
    }
};