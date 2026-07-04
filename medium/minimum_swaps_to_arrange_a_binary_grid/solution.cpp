class Solution {
public:
    int minSwaps(vector<vector<int>>& g) {
        int n = g.size();
        vector<int>s(n);
        for(int i=0;i<n;i++){
            int j=n-1;
            while(j>=0 && g[i][j]!=1) j--;
            s[i] = j;
        }
        int swaps=0;
        for(int i=0;i<n;i++){
            int j=i;
            if(s[j]<=i) continue;
            while(j<n && s[j]>i) j++;
            if(j==n) return -1;
            while(j>i){
                swap(s[j],s[j-1]);
                swaps++;
                j--;
            }
        }
        return swaps;
    }
};