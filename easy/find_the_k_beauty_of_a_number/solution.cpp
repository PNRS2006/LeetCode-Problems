class Solution {
public:
    int divisorSubstrings(int n, int k) {
        string s = to_string(n);
        int c=0;
        for(int i=0;i<=s.size()-k;i++){
            string s1 = s.substr(i,k);
            int k1 = stoi(s1);
            if(k1!=0 && n%k1==0) c++;
        }
        return c;
    }
};