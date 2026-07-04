class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string>v;
        for(int i=0;i<s.size();){
            int a=k;
            string t="";
            while(a--){
                if(i<s.size()) t+=s[i++];
                else t+=fill;
            }
            v.push_back(t);
        }
        return v;
    }
};