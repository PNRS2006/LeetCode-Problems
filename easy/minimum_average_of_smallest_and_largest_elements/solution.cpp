class Solution {
public:
    double minimumAverage(vector<int>& n) {
        vector<double>a;
        sort(n.begin(),n.end());
        int c=n.size();
        for(int i=0;i<c/2;i++)
        {
            double b=(n[i]+n[c-i-1])/2.0;
            a.push_back(b);
        }
        sort(a.begin(),a.end());
        return (a[0]);
    }
};