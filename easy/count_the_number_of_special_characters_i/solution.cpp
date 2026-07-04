class Solution {
public:
    int numberOfSpecialChars(string w) {
        set<char>s(w.begin(),w.end());
        int c=0;
        for(auto i=s.begin();i!=s.end();i++){
            if(islower(*i)){
                char k=toupper(*i);
                if(find(w.begin(),w.end(),k)!=w.end()) c++;
            }
        }
        return c;
    }
};