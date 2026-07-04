class Solution {
public:
    bool search(vector<int>& n, int t) {
        sort(n.begin(),n.end());
        return binary_search(n.begin(),n.end(),t);
    }
};