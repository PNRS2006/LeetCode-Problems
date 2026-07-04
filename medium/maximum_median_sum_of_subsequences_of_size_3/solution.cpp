class Solution {
public:
    long long maximumMedianSum(vector<int>& n) {
        sort(n.begin(), n.end());
        long long c = 0;
        int i = 0, j = n.size() - 1;

        while (i < j) {
            j--;        
            c += n[j--]; 
            i++;      
        }
        return c;
    }
};
