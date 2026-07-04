class Solution {
public:
    int minOperations(string s) {
        int x=0;
        sort(s.begin(),s.end());
        for(char c : s){
            if(c!='a'){
                x=(26+('a'-c))%26;
                break;
            }
        }
        return x;
    }
};