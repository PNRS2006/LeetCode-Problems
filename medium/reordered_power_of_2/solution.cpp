class Solution {
public:
    string fun(int n){
        string s = to_string(n);
        sort(s.begin(),s.end());
        return s;
    }
    bool reorderedPowerOf2(int n) {
        string s = fun(n);
        for(int i=0;i<31;i++){
            int p = 1<<i;
            if(fun(p)==s) return 1;
        }
        return 0;
    }
};