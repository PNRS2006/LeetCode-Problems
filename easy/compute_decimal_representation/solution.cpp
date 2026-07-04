class Solution {
public:
    int fun(int a){
        int result = 1;
        while(a--){
            result *= 10;
        }
        return result;
    }

    vector<int> decimalRepresentation(int n) {
        int a = log10(n);
        vector<int> v;
        while (a >= 0) {
            int c = fun(a);
            int digit = (n / c)*fun(a);
            if(digit!=0) v.push_back(digit);
            n %= c;
            a--;
        }
        return v;
    }
};
