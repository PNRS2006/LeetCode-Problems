class Solution {
public:
    bool isOneBitCharacter(vector<int>& b) {
        int n = b.size();
        int i = 0;
        while(i < n-1){
            if(b[i] == 1) i+=2;
            else i++;
        }
        return i == n-1;
    }
};