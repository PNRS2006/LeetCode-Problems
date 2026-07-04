class Solution {
public:
    int minNumberOperations(vector<int>& t) {
        int k = t[0];
        for(int i=1;i<t.size();i++){
            if(t[i]>t[i-1]) k += t[i]-t[i-1];
        }
        return k;
    }
};