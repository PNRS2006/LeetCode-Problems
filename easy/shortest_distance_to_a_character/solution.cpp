class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>a;
        for(int i=0;i<s.size();i++){
            if(s[i]==c){
                a.push_back(i);
            }
        }
        vector<int>b;
        for(int i=0;i<s.size();i++){
            int m=INT_MAX;
            for(int j : a){
                m = min(m,abs(i-j));
            }
            b.push_back(m);
        }
        return b;
    }
};