class Solution {
public:
    int sum(int n){
        int c=0 , e=0;
        for(int i=1;i<=n;i++){
            if(n%i==0) {
                c++;
                if(c>4) break;
                e+=i;
            }
        }
        if(c==4) return e;
        return 0;
    }
    int sumFourDivisors(vector<int>& nums) {
        int c=0;
        for(int i : nums){
            c+=sum(i);
        }
        return c;
    }
};