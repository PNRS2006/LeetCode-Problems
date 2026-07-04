class Solution {
public:
    int maxNumberOfBalloons(string t) {
        unordered_map<char,int>m;
        for(char i : t) m[i]++;
        return min({m['b'],m['a'],m['n'],m['o']/2, m['l']/2});
    }
};