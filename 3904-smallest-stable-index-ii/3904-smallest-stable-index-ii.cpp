class Solution {
public:
    int firstStableIndex(vector<int>& n, int k) {
        int sz = n.size();

        vector<int> prefixMax(sz), suffixMin(sz);

        prefixMax[0] = n[0];
        for(int i = 1; i < sz; i++)
            prefixMax[i] = max(prefixMax[i-1], n[i]);

        suffixMin[sz-1] = n[sz-1];
        for(int i = sz-2; i >= 0; i--)
            suffixMin[i] = min(suffixMin[i+1], n[i]);

        for(int i = 0; i < sz; i++) {
            long long diff = (long long)prefixMax[i] - suffixMin[i];
            if(diff <= k) return i;
        }

        return -1;
    }
};