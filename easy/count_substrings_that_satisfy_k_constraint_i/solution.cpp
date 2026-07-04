class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int l=0 , z=0 , o=0 , ans=0;
        for(int r=0;r<s.size();r++){
            if(s[r]=='1') o++;
            else z++;
            while(o>k && z>k){
                if(s[l]=='0') z--;
                else o--;
                l++;
            } 
            ans += (r-l+1);
        }
        return ans;
    }
};