class Solution {
public:
    int maxDistance(vector<int>& c) {
        int l=0 , r=c.size()-1;
        int m=0;
        while(l<r){
            if(c[l]==c[r]) l++;
            else{
                if(r-l>m) m=r-l;
                r--;
            }
        }
        l=0 , r=c.size()-1;
        while(l<r){
            if(c[l]==c[r]) r--;
            else{
                if(r-l>m) m=r-l;
                l++;
            }
        }
        return m;
    }
};