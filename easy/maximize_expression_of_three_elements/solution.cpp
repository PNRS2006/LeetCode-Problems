class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& n) {
        sort(n.begin(),n.end());
        int a = n[n.size()-1] + n[n.size()-2];
        int b = a - n[0];
        return b;
    }
};