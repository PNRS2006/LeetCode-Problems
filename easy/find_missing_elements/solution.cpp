class Solution {
public:
    vector<int> findMissingElements(vector<int>& n) {
        sort(n.begin(),n.end());
        int a = *min_element(n.begin(),n.end());
        int b = *max_element(n.begin(),n.end());
        vector<int>v;
        for(int i=a;i<=b;i++){
            if (find(n.begin(), n.end(), i) != n.end()) continue;
            else v.push_back(i);
        }
        return v;
    }
};