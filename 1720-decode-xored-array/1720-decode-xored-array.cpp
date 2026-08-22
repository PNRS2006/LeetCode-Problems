class Solution {
public:
    vector<int> decode(vector<int>& e, int f) {
        vector<int>v;
        v.push_back(f);
        int k=f;
        for(int i : e){
            int a = (i^k);
            k=a;
            v.push_back(a);
        }
        return v;
    }
};