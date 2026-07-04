class Solution {
public:
    int minOperations(vector<int>& n) {
        int c=1;
        for(int i=0;i<n.size()-1;i++){
            if(n[i]==n[i+1]) c++;
        }
        if(c==n.size()) return 0;
        return 1;
    }
};