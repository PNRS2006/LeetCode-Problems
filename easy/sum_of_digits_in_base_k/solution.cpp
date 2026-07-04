class Solution {
public:
    int sumBase(int n, int k) {
        int c=0;
        while(n>0){
            int a=n%k;
            c+=a;
            n/=k;
        }
        return c;
    }
};