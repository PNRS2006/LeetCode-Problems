class Solution {
public:
    int minimumPushes(string w) {
        unordered_map<char,int>m;
        for(char i : w) m[i]++;
        int c=0;
        vector<int>a;
        for(auto [k,v] : m){
            a.push_back(v);
        }
        sort(a.rbegin(),a.rend());
        int e=0,f=1,d=0;
        for(int i : a){
            e+=i*f;
            d++;
            if(d%8==0) f++;
        }
        return e;
    }
};