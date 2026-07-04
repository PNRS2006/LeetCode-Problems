class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& a) {
        sort(a.begin(),a.end());
        vector<vector<int>>v;
        int ai = INT_MAX;
        for(int i=0;i<a.size()-1;i++) ai = min(ai , abs(a[i]-a[i+1]));
        for(int i=0;i<a.size()-1;i++){
            if(abs(a[i]-a[i+1]) == ai) v.push_back({a[i],a[i+1]});
        }
        return v.size()!=0 ? v : vector<vector<int>>();
    }
};