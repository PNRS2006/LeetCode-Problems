class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        sort(s.rbegin(),s.rend());
        if(s[0]=='1'){
            s.erase(s.begin());
            s.push_back('1');
        }
        return s;
    }
};