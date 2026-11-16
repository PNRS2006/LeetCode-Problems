class Solution {
public:
    string fun(string s, int k){
        if(s.size()<=k) return s;

        string res="";
        for(int i=0;i<s.size();i+=k){
            string l = s.substr(i,k);
            int ans=0;
            for(char in : l) ans+=in-'0';
            res+=to_string(ans);
        }
        return fun(res,k);
    }
    string digitSum(string s, int k) {
        return fun(s,k);
    }
};