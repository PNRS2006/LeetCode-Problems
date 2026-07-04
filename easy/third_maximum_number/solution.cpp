class Solution {
public:
    int thirdMax(vector<int>& n) {
        set<int>x(n.begin(),n.end());
        vector<int>v;
        for(auto it=x.begin();it!=x.end();it++) v.push_back(*it);
        sort(v.rbegin(),v.rend());
        if(v.size()<3) return v[0];
        return v[2];
    }
};