class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int>m;
        int l=0 , k=0;
        for(int r=0;r<s.size();r++){
            while(m[s[r]]>=2){
                m[s[l]]--;
                l++;
            }
            m[s[r]]++;
            k = max(k,r-l+1);
        }
        return k;
    }
};