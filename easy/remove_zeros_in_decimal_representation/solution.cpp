class Solution {
public:
    long long removeZeros(long long n) {
        vector<int>v;
        while(n>0){
            if(n%10!=0){
                v.push_back(n%10);
                n/=10;
            }
            else n/=10;
        }
        reverse(v.begin(),v.end());
        long long c=0;
        for(int i : v){
            c=c*10+i;
        }
        return c;
    }
};