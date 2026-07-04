class Solution {
public:
    int findNonMinOrMax(vector<int>& n) {
        if(n.size()<=2) return -1;
        int ma = *max_element(n.begin(),n.end());
        int mi = *min_element(n.begin(),n.end());
        for(int i : n){
            if(i!=ma && i!=mi) return i;
        }
        return -1;
    }
};