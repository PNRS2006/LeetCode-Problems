class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& n1, vector<int>& n2) {
        vector<int>v1,v2;
        unordered_set<int>s1(n1.begin(),n1.end());
        unordered_set<int>s2(n2.begin(),n2.end());
        for(int i : s1) if(!s2.count(i)) v1.push_back(i);
        for(int i : s2) if(!s1.count(i)) v2.push_back(i);
        return {v1,v2};
    }
};