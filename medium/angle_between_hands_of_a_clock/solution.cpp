class Solution {
public:
    double angleClock(int h, int m) {
        double n = abs(30*h-5.5*m);
        return min(n,abs(360-n));
    }
};