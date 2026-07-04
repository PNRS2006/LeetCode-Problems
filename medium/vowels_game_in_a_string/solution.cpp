class Solution {
public:
    bool doesAliceWin(string s) {
        int c=0;
        for(char i : s){
            if(i=='a' || i=='e' || i=='i' || i=='o' || i=='u') c++;
        }
        return c!=0;
    }
};