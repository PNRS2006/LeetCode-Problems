class Solution {
public:
    int findGCD(vector<int>& n) {
        int a = *min_element(n.begin(),n.end());
        int p = *max_element(n.begin(),n.end());
        return gcd(a,p);
    }
};