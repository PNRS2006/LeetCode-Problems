class Solution {
public:
    bool canJump(vector<int>& n) {
        int c=0;
        for(int i=0;i<n.size();i++){
            if(i>c) return false;
            c = max(c,i+n[i]);
            if(c>=n.size()-1) return true;
        }
        return true;
    }
};