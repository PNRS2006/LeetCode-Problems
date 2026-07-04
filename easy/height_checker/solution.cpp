class Solution {
public:
    int heightChecker(vector<int>& h) {
        int c=0;
        vector<int>m(h);
        sort(m.begin(),m.end());
        for(int i=0;i<h.size();i++) if(h[i]!=m[i]) c++;
        return c;
    }
};