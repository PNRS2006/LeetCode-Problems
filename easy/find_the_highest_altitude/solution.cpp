class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int c=0,m=0;
        for(int g : gain)
        {
            c+=g;
            if(c>m) m=c;
        }
        return m;
    }
};