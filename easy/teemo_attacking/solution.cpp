class Solution {
public:
    int findPoisonedDuration(vector<int>& t, int d) {
        int c = d;
        for(int i=0;i<t.size()-1;i++){
            if(t[i+1]-t[i] > d) c+=d;
            else c+=(t[i+1]-t[i]);
        }
        return c;
    }
};