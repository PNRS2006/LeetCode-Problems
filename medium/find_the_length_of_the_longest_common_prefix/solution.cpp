class Solution {
public:
    int longestCommonPrefix(vector<int>& a1, vector<int>& a2) {
        int c=0;
        unordered_set<string>s;
        for(int j : a1){
            string k = to_string(j);
            string p = "";
            for(char i : k){
                p += i;
                s.insert(p);
            }
        }
        for(int j : a2){
            string k = to_string(j);
            string p = "";
            for(char i : k){
                p += i;
                if(s.count(p)) c = max(c , (int)p.size());
            }
        }
        return c;
    }
};