class Solution {
public:
    bool wordPattern(string p, string s) {
        vector<string>v;
        int i=0;
        string st="";
        while(i<s.size()){
            while(i<s.size() && s[i]!=' '){
                st+=s[i];
                i++;
            }
            if(s[i]==' ') {
                v.push_back(st);
                i++;
                st="";
            }
        }
        v.push_back(st);
        if(v.size()!=p.size()) return 0;
        unordered_map<string,char>m1;
        unordered_map<char,string>m2;
        for(int i=0;i<v.size();i++){
            if(m1.count(v[i])==0 && m2.count(p[i])==0){
                m1[v[i]] = p[i];
                m2[p[i]] = v[i];
            }
            else if(m1[v[i]]!=p[i]) return 0;
        }
        return 1;
    }
};