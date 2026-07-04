class Solution {
public:
    string mapWordWeights(vector<string>& w, vector<int>& we) {
        string t="";
        for(string s : w){
            int sum = 0;
            for(int i=0;i<s.size();i++){
                sum+=we[s[i]-97];
            }
            int d=sum%26;
            t+=char('z'-d);
        }
        return t;
    }
};