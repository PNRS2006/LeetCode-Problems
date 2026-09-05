class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>a(256,-1);
        int l=0 , mi=0;
        for(int i=0;i<s.size();i++){
            if(a[s[i]]>=l) l = a[s[i]]+1;
            a[s[i]] = i;
            mi = max(mi,i-l+1);
        }
        return mi;
    }
};