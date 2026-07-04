class Solution {
public:
    int mirrorDistance(int n) {
        string s = to_string(n);
        int c=0;
        reverse(s.begin(),s.end());
        for(int i=0;i<s.size();i++){
            c=(c*10)+(s[i]-'0');
        }
        return abs(n-c);
    }
};