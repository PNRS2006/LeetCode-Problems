class Solution {
public:
    int fun(int n){
        int c=0;
        while(n>0){
            c+=n%10;
            n/=10;
        }
        return c;
    }
    int countLargestGroup(int n) {
        unordered_map<int,int>a;
        for(int i=1;i<=n;i++){
            int k=fun(i);
            a[k]++;
        }
        int ma=0;
        for(auto [k,v] : a){
            if(v>ma) ma=v;
        }
        int c=0;
        for(auto [k,v] : a){
            if(v==ma) c++;
        }
        return c;
    }
};