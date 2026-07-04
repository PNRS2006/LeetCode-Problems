class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        int i=0;
        while(i+2<s1.size()){
            if(s1[i]!=s2[i]) swap(s1[i],s1[i+2]);
            i++;
        }
        return s1==s2;
    }
};