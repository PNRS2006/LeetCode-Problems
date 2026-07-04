class Solution {
public:
    bool checkPowersOfThree(int n) {
        int c=0;
        for(int i=n;i>0;i/=3)
        {
            if(i%3==2) c++;
        }
        if(c>0) return false;
        return true;
    }
};