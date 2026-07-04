class Solution {
public:
    int longestSubarray(vector<int>& a) {
        int n=a.size();
        if(n<=2) return n;
        int c=2;
        int ma=2;
        for(int i=2;i<n;i++){
            if(a[i]==a[i-1]+a[i-2]) c++;
            else c=2;
            ma = max(ma,c);
        }
        return ma;
    }
};