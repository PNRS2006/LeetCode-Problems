class Solution {
public:
    int reverseBits(int n) {
        vector<int>a;
        int c=0,d=0;
        while(n){
            d++;
            a.push_back(n&1);
            n>>=1;
        }
        int i=32-a.size();
        while(i>0){
            a.push_back(0);
            i--;
        }
        cout << d << " " << a.size();
        int e=0;
        for(int i=a.size()-1;i>=0;i--){
            c+=a[i]*pow(2,e);
            e++;
        }
        return c;
    }
};