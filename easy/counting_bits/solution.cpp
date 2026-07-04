class Solution {
public:
    vector<int> countBits(int n) {
        int i=0;
        vector<int>v;
        while(i<=n){
            int c=0;
            int a=i;
            while(a){
                if((a&1)==1) c++;
                a>>=1;
            }
            v.push_back(c);
            i++;
        }
        return v;
    }
};