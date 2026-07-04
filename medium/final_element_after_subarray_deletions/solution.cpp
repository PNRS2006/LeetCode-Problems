class Solution {
public:
    int finalElement(vector<int>& n) {
        return max(n.front() , n.back());
    }
};