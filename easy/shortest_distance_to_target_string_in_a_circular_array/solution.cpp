class Solution {
public:
    int closestTarget(vector<string>& w, string t, int s) {
        int c=0,d=0;
        int n=w.size();
        int i=s , j=s;
        while(c<n && w[(i)%n]!=t) {
            c++;
            i++;
        }
        while(d<n && w[(j+n)%n]!=t) {
            d++;
            j--;
        }
        if(c==n && d==n) return -1;
        return min(c,d);
    }
};