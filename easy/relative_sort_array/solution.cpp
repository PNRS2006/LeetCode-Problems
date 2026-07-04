class Solution {
public:
    vector<int> relativeSortArray(vector<int>& a1, vector<int>& a2) {
        vector<int>v;
        set<int>s(a2.begin(),a2.end());
        for(int i=0;i<a2.size();i++){
            for(int j=0;j<a1.size();j++){
                if(a2[i]==a1[j]) v.push_back(a1[j]);
            }
        }
        sort(a1.begin(),a1.end());
        for(int i : a1) if(!s.count(i)) v.push_back(i);
        return v;
    }
};