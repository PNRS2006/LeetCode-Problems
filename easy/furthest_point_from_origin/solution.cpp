class Solution {
public:
    int furthestDistanceFromOrigin(string m) {
        int l=0 , r=0 , i=0;
        for(char k : m){
            if(k=='L') l++;
            else if(k=='R') r++;
            else i++;
        }
        return abs(l-r)+i;
    }
};