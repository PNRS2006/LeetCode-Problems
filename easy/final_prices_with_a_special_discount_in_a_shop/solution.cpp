class Solution {
public:
    vector<int> finalPrices(vector<int>& p) {
        vector<int>v;
        for(int i=0;i<p.size();i++){
            int k=p[i];
            for(int j=i+1;j<p.size();j++){
                if(p[j]<=p[i]){
                    k=(p[i]-p[j]);
                    break;
                }
            }
            v.push_back(k);
        }
        return v;
    }
};