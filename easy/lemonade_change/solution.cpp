class Solution {
public:
    bool lemonadeChange(vector<int>& b) {
        int c=0,d=0,e=0;
        for(int i : b){
            if(i==5) c++;
            if(i==10) {
                d++;
                c--;
            }
            if(i==20){
                e++;
                c--;
                d--;
                if(d<0 && c>=2){
                    c=c-2;
                    d++;
                }
            }
            if(c<0 || d<0 || e<0) return false;
        }
        cout << c << " " << d << " " << e;
        return c>=0 && d>=0 && e>=0;
    }
};