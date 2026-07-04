class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==0) return false;
        int c=0;
        while(n%3==0){
            n=n/3;
            c++;
        }
        return n==1;
    }
};