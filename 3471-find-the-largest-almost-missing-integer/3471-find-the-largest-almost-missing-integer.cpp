class Solution {
public:
    int largestInteger(vector<int>& n, int k) {
        unordered_map<int,int>m;
        for(int i : n) m[i]++;
        for(int &i : n){
            if(m[i]>k) i=-1;
        }
        if(k==1 || k==n.size()) return *max_element(n.begin(),n.end());
        if(m[n[0]]==1 && m[n[n.size()-1]]==1) return max(n[0],n[n.size()-1]);
        if(m[n[0]]==1) return n[0];
        if(m[n[n.size()-1]]==1) return n[n.size()-1];
        return -1;
    }
};