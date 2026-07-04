class Solution {
public:
    string inv(string &s){
        for(int i=0;i<s.size();i++){
            if(s[i]=='0') s[i]='1';
            else if(s[i]=='1') s[i]='0';
        }
        reverse(s.begin(),s.end());
        return s;
    }
    char findKthBit(int n, int k) {
        string s="0";
        stack<string>st;
        st.push(s);
        for(int i=1;i<=n;i++) {
            s=st.top()+"1"+inv(st.top());
            st.push(s);
        }
        return s[k-1];
    }
};