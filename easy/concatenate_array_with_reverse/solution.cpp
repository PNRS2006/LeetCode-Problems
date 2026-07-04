class Solution {
public:
    vector<int> concatWithReverse(vector<int>& n) {
        for(int i=n.size()-1;i>=0;i--) n.push_back(n[i]);
        return n;
    }
};