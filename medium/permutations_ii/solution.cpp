class Solution {
public:
    vector<vector<int>>v;

    void permute(int idx , vector<int>& a){
        if(idx == a.size()){
            v.push_back(a);
            return;
        }

        unordered_set<int>used;

        for(int i=idx ; i<a.size() ; i++){
            if(used.count(a[i])) continue;
            used.insert(a[i]);
            swap(a[idx] , a[i]);
            permute(idx+1 , a);
            swap(a[idx] , a[i]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        permute(0 , nums);
        return v;
    }
};