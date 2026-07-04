class Solution {
public:
    int minSteps(string s, string t) {
        int k=0;
        set<char>st(s.begin(),s.end());
        unordered_map<char,int>m;
        unordered_map<char,int>n;
        for(char i : s) m[i]++;
        for(char i : t) n[i]++;
        for(auto i=st.begin();i!=st.end();i++) {
            if(n[*i]<m[*i]) k+=(m[*i]-n[*i]);
        }
        return k;
    }
};