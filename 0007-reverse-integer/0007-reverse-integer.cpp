class Solution {
public:
    int reverse(int x) {
        string s = to_string(x);
        long long k;
        if(s[0]=='-'){
            ::reverse(s.begin()+1,s.end());
            k = stoll(s);
            return (k>=INT_MIN && k<=INT_MAX)? k : 0;
        }
        ::reverse(s.begin(),s.end());
        k = stoll(s);
        return (k>=INT_MIN && k<=INT_MAX)? k : 0;
    }
};