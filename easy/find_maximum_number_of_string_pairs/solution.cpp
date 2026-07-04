class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& w) {
        int c=0;
        unordered_set<string>s;
        for(int i=0;i<w.size();i++){
            string t = w[i];
            reverse(t.begin(),t.end());
            if(s.count(t)) c++;
            else s.insert(w[i]);
        }
        return c;
    }
};