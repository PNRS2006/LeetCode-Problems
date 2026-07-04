class Solution {
public:
    int maxCoins(vector<int>& p) {
        int n=p.size()/3;
        sort(p.begin(),p.end());
        long long sum = 0;
        int i=p.size()-2;
        while(n--){
            sum+=p[i];
            i=i-2;
        }
        return sum;
    }
};