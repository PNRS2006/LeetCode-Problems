class Solution {
public:
    long long maxTotalValue(vector<int>& n, int k) {
        long long c=0;
        int a=*max_element(n.begin(),n.end());
        int b=*min_element(n.begin(),n.end());
        while(k--){
            c+=(a-b);
        }
        return c;
    }
};