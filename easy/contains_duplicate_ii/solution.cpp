class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& n, int k) {
       unordered_set<int>a;
       for(int i=0;i<n.size();i++){
            if(a.count(n[i])) return true;
            a.insert(n[i]);
            if(a.size()>k) a.erase(n[i-k]);
        }
       return false;
    }
};