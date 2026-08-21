class Solution {
public:
    int rangeBitwiseAnd(int l, int r) {
        long long c=0;
        while(l!=r && l>0) {
            c++;
            l>>=1;
            r>>=1;
        }
        return (l<<c);
    }
};