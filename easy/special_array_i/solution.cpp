class Solution {
public:
    bool isArraySpecial(vector<int>& n) {
        if(n.size()<=1) return true;
        for(int i=0;i<n.size()-1;i++){
            if((n[i]%2==0 && n[i+1]%2!=0) || (n[i]%2!=0 && n[i+1]%2==0)) continue;
            else return false;
        }
        return true;
    }
};