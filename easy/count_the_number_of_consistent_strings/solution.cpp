class Solution {
public:
    int countConsistentStrings(string a, vector<string>& w) {
        int cnt = 0;
        unordered_set<char> se(a.begin(),a.end());

        for(string &s : w){
            bool fun = true;
            for(char c : s){
                if(!se.count(c)) fun = false;
            }
            if(fun) cnt++;
        }
        return cnt;
    }
};