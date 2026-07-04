class Solution {
public:
    vector<int> recoverOrder(vector<int>& o, vector<int>& f) {
        vector<int>a;
        for(int i=0;i<o.size();i++){
            for(int j=0;j<f.size();j++){
                if(o[i]==f[j]) a.push_back(f[j]);
            }
        }
        return a;
    }
};