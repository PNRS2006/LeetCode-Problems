class Solution {
public:
    bool judgeCircle(string m) {
        int a=0,b=0,c=0,d=0;
        for(char i : m){
            if(i=='U') a++;
            else if(i=='D') b++;
            else if(i=='L') c++;
            else if(i=='R') d++;
        }
        return (a==b && c==d);
    }
};