class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> st;
        for(string i : arr) st[i]++;
        vector<string> v;
        for(auto &i : arr){
            if(st[i]==1) v.push_back(i);
        }
        return v.size()>=k? v[k-1] : "";
    }
};