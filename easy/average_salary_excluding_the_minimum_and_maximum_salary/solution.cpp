class Solution {
public:
    double average(vector<int>& s) {
        sort(s.begin(),s.end());
        double c=0;
        for(int i=1;i<s.size()-1;i++) c+=(double)s[i];
        double l = s.size()-2; 
        return c/l;
    }
};