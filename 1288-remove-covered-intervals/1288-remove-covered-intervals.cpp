class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& in) {
        sort(in.begin(),in.end(),[](auto &a , auto &b){
            if(a[0]==b[0]) return a[1]>b[1];
            return a[0]<b[0];
        });
        int c=0;
        while(!in.empty()){
            int i=1;
            while(i<in.size()){
                if(in[0][0]<=in[i][0] && in[0][1]>=in[i][1]) in.erase(in.begin()+i);
                else i++;
            }
            in.erase(in.begin());
            c++;
        }
        return c;
    }
};