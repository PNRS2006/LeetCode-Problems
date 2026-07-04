class Solution {
public:
    int prefixConnected(vector<string>& w, int k) {
        unordered_map<string,int>m;
        sort(w.begin(),w.end());
        int c=0;
        for(string s : w){
            vector<string>v;
            if(s.size()>=k) {
                string t=s.substr(0,k);
                m[t]++;
            }
        }
        for(auto &p : m) if(p.second>=2) c++;
        return c;
    }
};