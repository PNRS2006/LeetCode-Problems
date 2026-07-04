class Solution {
public:
    int centeredSubarrays(vector<int>& n) {
        int c=0;
        for(int i=0;i<n.size();i++){
            int s=0;
            unordered_set<int>v;
            for(int j=i;j<n.size();j++){
                s+=n[j];
                v.insert(n[j]);
                if(v.count(s)) c++;
            }
        }
        return c;
    }
};