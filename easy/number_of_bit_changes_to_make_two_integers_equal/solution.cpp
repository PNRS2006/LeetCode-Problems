class Solution {
public:
    int minChanges(int n, int k) {
        int c=0;
        while(n || k){
            if((n&1)==0 && (k&1)==0 || (n&1)==1 && (k&1)==1){
                n = n>>1;
                k = k>>1;
            }
            else if((n&1)==1 && (k&1)==0){
                n = n>>1;
                k = k>>1;
                c++;
            }
            else return -1;
        }
        return c;
    }
};