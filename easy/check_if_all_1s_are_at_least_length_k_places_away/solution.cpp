class Solution {
public:
    bool kLengthApart(vector<int>& n, int k) {
        int prev = -1;
        for(int i = 0 ; i < n.size() ; i++){
            if(n[i] == 1){
                if(prev != -1 && i-prev-1 < k) return false;
                prev = i;
            }
        }
        return true;
    }
};