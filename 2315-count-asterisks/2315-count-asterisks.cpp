class Solution {
public:
    int countAsterisks(string s) {
        int c=0 , a=0;
        for(char i : s){
            if(i=='*' && c%2==0) a++;
            if(i=='|') c++;
        }
        return a;
    }
};