class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int hash[256];
        fill(hash , hash+256 , -1);
        int l = 0 , r = 0;
        int n = s.size();
        int m = 0;
        while(r<n){
            if(hash[s[r]] != -1 && hash[s[r]] >= l) l = hash[s[r]]+1;
            m = max(m , r-l+1);
            hash[s[r]] = r;
            r++;
        }
        return m;
    }
};