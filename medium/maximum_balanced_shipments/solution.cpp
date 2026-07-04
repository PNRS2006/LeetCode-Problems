class Solution {
public:
    int maxBalancedShipments(vector<int>& w) {
        int c=0;
        for(int i=0;i<w.size()-1;i++){
            if(w[i+1]<w[i]){
                c++;
                i++;
            }
        }
        return c;
    }
};