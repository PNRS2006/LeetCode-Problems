class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& c, int e) {
        vector<bool> a;
        int n=c.size();
        int max=c[0];
        for(int i=0;i<n;i++)
        {
            if(c[i]>max) max=c[i];
        }
        for(int i=0;i<n;i++)
        {
            if(c[i]+e >= max) a.push_back(1);
            else a.push_back(0);
        }
        return a;
    }
};