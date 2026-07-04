class Solution {
public:
    vector<int> intersect(vector<int>& n1, vector<int>& n2) {
        unordered_map<int,int>m2;
        for(int i : n2) m2[i]++;
        vector<int>v;
        for(int i=0;i<n1.size();i++){
            if(m2[n1[i]]>0){
                m2[n1[i]]--;
                v.push_back(n1[i]);
            }
        }
        return v;
    }
};