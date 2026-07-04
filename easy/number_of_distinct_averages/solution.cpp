class Solution {
public:
    int distinctAverages(vector<int>& n) {
        set<double>a;
        sort(n.begin(),n.end());
        for(int i=0;i<n.size()/2;i++)
        {
            double b = (n[i]+n[n.size()-i-1])/2.0;
            a.insert(b);
        }
        return a.size();
    }
};