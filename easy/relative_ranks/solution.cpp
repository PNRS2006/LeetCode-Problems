class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& s) {
        vector<int>v(s);
        sort(v.rbegin(),v.rend());

        map<int,int>m;
        for(int i=0;i<s.size();i++) m[v[i]] = i+1;

        vector<string>st(s.size());
        for(int i=0;i<s.size();i++){
            int r = m[s[i]];
            if(r==1) st[i] = "Gold Medal";
            else if(r==2) st[i] = "Silver Medal";
            else if(r==3) st[i] = "Bronze Medal";
            else st[i] = to_string(r);
        }
        return st;
    }
};