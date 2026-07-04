class Solution {
public:
    int minMoves(vector<int>& n) {
        int c = 0;
        int a = *max_element(n.begin(),n.end());
        for(int i : n){
            c+=(a-i);
        }
        return c;
    }
};