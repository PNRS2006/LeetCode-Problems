class Solution {
public:
    int minOperations(string s) {
        int k1=0 , k2=0;
        for(int i=0;i<s.size();i++){
            char p1 = (i%2==0)? '0':'1';
            char p2 = (i%2==0)? '1':'0';
            if(s[i]!=p1) k1++;
            if(s[i]!=p2) k2++;
        }
        return min(k1,k2);
    }
};