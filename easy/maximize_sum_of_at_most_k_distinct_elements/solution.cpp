class Solution {
public:
    vector<int> maxKDistinct(vector<int>& n, int k) {
        set<int>a;
        vector<int>v;
        int c=0,i=0;
        for(int i : n) a.insert(i);
        vector<int>b(a.begin(),a.end());
        sort(b.rbegin(),b.rend());
        for(int i=0;i<b.size() && i<k;i++){
            v.push_back(b[i]);
        }
        return v;
    }
};