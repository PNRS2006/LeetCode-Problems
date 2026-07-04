class Solution {
public:
    int fun(int n){
        int b=n,max=0,c=0;
        int a = log10(n)+1;
        if(a==1) return n;
        else{
            while(b>0){
                int d=b%10;
                if(d>max) max=d;
                b/=10;
            }
        }
        while(a--){
            c=c*10+max;
        }
        return c;
    }
    int sumOfEncryptedInt(vector<int>& n) {
        int c=0;
        for(auto i : n){
            c+=fun(i);
        }
        return c;
    }
};