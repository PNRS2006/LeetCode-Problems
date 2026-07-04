class Solution {
public:
    int minimumPrefixLength(vector<int>& a) {
        int n = a.size() , i=n-1;
        while(i>0 && a[i-1]<a[i]) i--;
        return i;
    }
};