class Solution {
public:
    int maximumValue(vector<string>& strs) {
        vector<int>v;
        for(string s : strs){
            int d = 0 , c=0;
            for(int i=0;i<s.size();i++){
                if(isdigit(s[i])) {
                    c++;
                    d = (d*10)+(s[i]-'0');
                }
            }
            if(c==s.size()) v.push_back(d);
            else v.push_back(s.size());
        }
        return *max_element(v.begin(),v.end());
    }
};