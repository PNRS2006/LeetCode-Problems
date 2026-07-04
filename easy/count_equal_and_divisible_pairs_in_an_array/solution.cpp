class Solution {
public:
    int countPairs(vector<int>& n, int k) {
        int b,c=0,d=n.size();
        for(int i=0;i<d-1;i++)
        {
            for(int j=i+1;j<d;j++)
            {
                if(n[i]==n[j]){
                    b=i*j;
                    if(b%k==0) c++;
                }
            }
        }
        return c;
    }
};