class Solution {
public:
    bool scoreBalance(string s) {
        int sum=0;
        for(auto val:s) sum+=val-'a'+1;
        int k=0;
        for(int i=0;i<s.size()-1;i++){
            k+=s[i]-'a'+1;
            if(k+k==sum) return 1;
        }
        return 0;
    }
};