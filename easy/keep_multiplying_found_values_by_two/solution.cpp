class Solution {
public:
    int findFinalValue(vector<int>& n, int o) {
        while(find(n.begin(),n.end(),o)!=n.end()) o = o*2;
        return o;
    }
};