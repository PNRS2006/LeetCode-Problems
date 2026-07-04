class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s1 = "";
        string t1 = "";
        for(char i : s){
            if(i == '#' && s1.size() > 0) s1.pop_back();
            else if(i == '#' && s1.size() <= 0) continue;
            else s1.push_back(i);
        }
        for(char i : t){
            if(i == '#' && t1.size() > 0) t1.pop_back();
            else if(i == '#' && t1.size() <= 0) continue;
            else t1.push_back(i);
        }
        cout << s1 << " " << t1;
        return s1 == t1;
    }
};