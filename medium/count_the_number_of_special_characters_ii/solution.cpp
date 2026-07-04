class Solution {
public:
    int numberOfSpecialChars(string w) {
        unordered_map<char,int>m;
        for(char i : w) m[i]++;
        unordered_map<char,int>freq;
        set<char>s;
        int c=0;
        for(char l : w){
            freq[l]++;
            if(isupper(l) && freq[l]==1 && !s.count(l)){
                s.insert(l);
                char k=tolower(l);
                if(freq[k]>0 && freq[k]==m[k]) c++;
            }
            else continue;
        }
        return c;
    }
};