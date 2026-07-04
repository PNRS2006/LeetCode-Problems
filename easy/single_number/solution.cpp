class Solution {
public:
    int singleNumber(vector<int>& n) {
        int a=0;
        for(int i : n) a^=i;
        return a;
    }
};