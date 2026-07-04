class Solution {
public:
    int minimumCost(vector<int>& c) {
        sort(c.rbegin(),c.rend());
        int s=0;
        for(int i=0;i<c.size();i++){
            if(i%3!=2) s+=c[i];
        }
        return s;
    }
};