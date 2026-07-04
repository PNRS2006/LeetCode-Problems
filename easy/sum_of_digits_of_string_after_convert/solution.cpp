class Solution {
public:
    int getLucky(string s, int k) {
        int c=0;
        for(char i : s){
            int a = i-'a'+1;
            while(a>0){
                c+=a%10;
                a/=10;
            }
        }
        for(int i=1;i<k;i++){
            int e=0;
            while(c>0){
                e+=c%10;
                c/=10;
            }
            c=e;
        }
        return c;
    }
};