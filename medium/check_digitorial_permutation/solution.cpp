class Solution {
public:
    bool isDigitorialPermutation(int n) {
        vector<int>f(10);
        f[0] = 1;
        for(int i=1;i<10;i++){
            f[i] = f[i-1]*i;
        }
        vector<int>v1 , v2;
        int k=n;
        int sum=0;
        while(k){
            v1.push_back(k%10);
            sum+=f[k%10];
            k/=10;
        }
        int l=sum;
        while(l){
            v2.push_back(l%10);
            l/=10;
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        return v1==v2;
    }
};