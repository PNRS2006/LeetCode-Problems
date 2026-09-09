class Solution {
public:
    bool isPalindrome(string s) {
        string st;
        for(char i : s) if((i>='a' && i<='z') || (i>='A' && i<='Z') || (i>='0' && i<='9')) st+=tolower(i);
        int i=0,j=st.size()-1;
        while(i<j){
            if(st[i++]!=st[j--]) return 0;
        }
        return 1;
    }
};