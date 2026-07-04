class Solution {
public:
    int minimumSum(int n) {
        vector<int>a;
        while(n>0){
            a.push_back(n%10);
            n/=10;
        }
        sort(a.begin(),a.end());
        int b = a[0]*10+a[3];
        int c = a[1]*10+a[2];
        return b+c;
    }
};