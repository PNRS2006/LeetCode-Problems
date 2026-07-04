class Solution {
public:
    vector<int> searchRange(vector<int>& n, int t) {
        int a=-1 , b=-1;
        for(int i=0;i<n.size();i++){
            if(n[i]==t){
                a = i;
                break;
            }
        } 
        for(int i=0;i<n.size();i++) if(n[i]==t) b=i;
        return {a,b};
    }
};