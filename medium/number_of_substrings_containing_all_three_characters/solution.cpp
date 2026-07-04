class Solution {
public:
    int numberOfSubstrings(string s) {
        int d=0;
        int cnt[3] = {0};
        int l=0 ;
        for(int r=0;r<s.size();r++){
            cnt[s[r]-'a']++;
            while(cnt[0]>0 && cnt[1]>0 && cnt[2]>0) {
                d+=s.size()-r;
                cnt[s[l]-'a']--;
                l++;
            }
       } 
       return d;
    }
};