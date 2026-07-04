class Solution {
public:
    int numWaterBottles(int n, int e) {
        int rem_bot = (n/e)+(n%e);
        int cnt = n/e;
        while(rem_bot>=e){
            cnt += (rem_bot/e);
            rem_bot = (rem_bot/e)+(rem_bot%e);
        }
        return n+cnt;
    }
};