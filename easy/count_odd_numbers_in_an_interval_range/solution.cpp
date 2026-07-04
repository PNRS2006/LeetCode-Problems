class Solution {
public:
    int countOdds(int l, int h) {
        int c=0;
        for(int i=l;i<=h;i++) if(i%2!=0) c++;
        return c;
    }
};