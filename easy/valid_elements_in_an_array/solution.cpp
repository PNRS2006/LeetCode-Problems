class Solution {
public:
    vector<int> findValidElements(vector<int>& n) {
        vector<int>v;
        v.push_back(n[0]);
        for(int i=1;i<n.size()-1;i++){
            bool l=true , r=true;
            for(int j=0;j<i;j++){
                if(n[j]>=n[i]){
                    l = false;
                    break;
                }
            }
            for(int j=i+1;j<n.size();j++){
                if(n[j]>=n[i]){
                    r = false;
                    break;
                }
            }
            if(l || r) v.push_back(n[i]);
        }
        if(n.size()>1) v.push_back(n[n.size()-1]);
        return v;
    }
};