class Solution {
public:
    vector<int> stableMountains(vector<int>& h, int t) {
        vector<int>a;
        for(int i=1;i<h.size();i++){
            if(h[i-1]>t) a.push_back(i);
        }
        return a;
    }
};