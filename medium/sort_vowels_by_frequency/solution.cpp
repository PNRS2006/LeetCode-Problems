class Solution {
public:
    bool isVowel(char c) {
        return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
    }
    string sortVowels(string s) {
        unordered_map<char,int>m;
        unordered_map<char,int>pos;
        for(int i=0;i<s.size();i++) {
            if(isVowel(s[i])) {
                m[s[i]]++;
                if(!pos.count(s[i])) pos[s[i]]=i;
            }
        }
        vector<pair<char,int>>p;
        for(auto [k,v] : m) p.push_back({k,v});
        sort(p.begin(),p.end() , [&](auto a , auto b){
            if(a.second==b.second) return pos[a.first]<pos[b.first];
            return a.second > b.second;
        });
        vector<char>v;
        for(auto &k : p){
            while(k.second--) v.push_back(k.first);
        }
        string st = "";
        int i=0;
        for(int j=0;j<s.size();j++){
            if(!isVowel(s[j])) st+=s[j];
            else st+=v[i++];
        }
        return st;
    }
};