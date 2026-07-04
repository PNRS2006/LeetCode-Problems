class Solution {
public:
    bool fun(int n){
        while(n>0){
            if(n%10==0)
            return false;
            n/=10;
        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n) {
        vector<int>a;
        for(int i=1;i<n;i++){
            if(fun(i) && fun(n-i)){
                a.push_back(i);
                a.push_back(n-i);
                break;
            }
        }
        return a;
    }
};