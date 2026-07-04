int palin(string s){
    int i=0,j=s.size()-1;
    while(i<j){
        if(s[i]!=s[j]) return 0;
        i++;
        j--;
    }
    return 1;
}
class Solution {
public:
    string firstPalindrome(vector<string>& w) {
        for(string &i : w){
            if(palin(i)==1) return i;
        }
        return "";
    }
};