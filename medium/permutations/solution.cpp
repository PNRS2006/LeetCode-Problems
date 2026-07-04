class Solution {
public:
    vector<vector<int>>v;
    void permute(int idx , vector<int>& a){
        if(idx == a.size()){
            v.push_back(a);
            return;
        }

        for(int i=idx ; i<a.size() ; i++){
            swap(a[idx] , a[i]);
            permute(idx+1 , a);
            swap(a[idx] , a[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        permute(0,nums);
        return v;
    }
};