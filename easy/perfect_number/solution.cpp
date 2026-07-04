class Solution {
public:
    bool checkPerfectNumber(int num) {
        int i,b=0;
        for(i=1;i<num;i++)
        {
            if(num%i==0)
            {
                b=b+i;
            }
        }
        return b==num;
    }
};