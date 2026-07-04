class Solution {
public:
    int singleNonDuplicate(vector<int>& n) {
        unordered_map<int,int>b;
        for(int i : n) b[i]++;
        for(auto [k,v] : b){
            if(v==1) return k;
        }
        return 0;
    }
};