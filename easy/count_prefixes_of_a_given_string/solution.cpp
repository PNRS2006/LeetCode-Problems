class Solution {
public:
    int countPrefixes(vector<string>& w, string s) {
        int c=0;
        for(string k : w){
            int n=k.size();
            string l=s.substr(0,n);
            if(l==k) c++;
        }
        return c;
    }
};