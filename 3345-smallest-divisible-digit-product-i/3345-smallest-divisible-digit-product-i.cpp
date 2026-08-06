class Solution {
private:
    int fun(int n){
        int c=1;
        while(n>0){
            c*=n%10;
            n/=10;
        }
        return c;
    }
public:
    int smallestNumber(int n, int t) {
        while(fun(n)%t!=0) n++;
        return n;
    }
};