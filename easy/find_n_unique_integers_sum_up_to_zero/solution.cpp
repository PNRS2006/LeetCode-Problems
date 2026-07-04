class Solution {
public:
    vector<int> sumZero(int n) {
        if(n==1) return {0};
        vector<int>a;
        int i=1;
        if(n%2!=0) a.push_back(0);
        int b=n/2;
        while(b--){
            a.push_back(i);
            a.push_back(-i);
            i++;
        }
        sort(a.begin(),a.end());
        return a;
    }
};