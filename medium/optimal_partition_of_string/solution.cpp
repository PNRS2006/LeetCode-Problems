class Solution {
public:
    int partitionString(string s) {
        set<char>a;
        int f=1,i=0;
        while(i<s.size()){
            char c=s[i];
            if(!a.count(c)) {
                a.insert(c);
                i++;
            }
            else if(a.count(c)){
                a.clear();
                f++;
            }
        }
        return f;
    }
};