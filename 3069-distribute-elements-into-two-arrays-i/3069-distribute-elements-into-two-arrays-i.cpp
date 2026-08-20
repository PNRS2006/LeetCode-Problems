class Solution {
public:
    vector<int> resultArray(vector<int>& n) {
        vector<int>s1,s2,v;
        s1.push_back(n[0]);
        s2.push_back(n[1]);
        for(int i=2;i<n.size();i++){
            if(s1.back()>s2.back()) s1.push_back(n[i]);
            else s2.push_back(n[i]);
        }
        for(int i : s1) v.push_back(i);
        for(int i : s2) v.push_back(i);
        return v;
    }
};