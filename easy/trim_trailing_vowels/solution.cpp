class Solution {
public:
    bool is_v(char c){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u') return true;
        return false;
    }
    string trimTrailingVowels(string s) {
        while(!s.empty() && is_v(s.back())) s.pop_back();
        return s;
    }
};