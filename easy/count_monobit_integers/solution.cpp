class Solution {
public:
    int countMonobit(int n) {
        int c=1;
        int x=1;
        while(x <= n){
            x = (x<<1) | 1;
            c++;
        }
        return c;
    }
};