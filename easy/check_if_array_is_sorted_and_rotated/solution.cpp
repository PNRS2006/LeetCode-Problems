class Solution {
public:
    bool check(vector<int>& n) {
        int c=0;
        for(int i=0;i<n.size();i++){
            if(n[i]>n[(i+1)%n.size()]) c++;
        }
        return c<=1;
    }
};