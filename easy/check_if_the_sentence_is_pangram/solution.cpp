class Solution {
public:
    bool checkIfPangram(string s) {
        string t="abcdefghijklmnopqrstuvwxyz";
        if(s.size()<26) return false;
        sort(s.begin(),s.end());
        int i=0,j=0;
        while(j<t.size() && i<s.size()){
            if(t[j]==s[i]){
                i++;
                j++;
            }
            else i++;
        }
        return j==26;
    }
};