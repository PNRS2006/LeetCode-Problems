class Solution {
public:
    bool isGood(vector<int>& n) {
        sort(n.begin(),n.end());
        int a = *max_element(n.begin(),n.end());
        if(n.size()!=a+1) return 0;
        int c=0;
        for(int i=0;i<n.size();i++){
            if(n[i]!=i+1) c++;
        }
        return c==1;
    }
};