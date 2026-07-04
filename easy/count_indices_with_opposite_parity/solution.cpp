class Solution {
public:
    vector<int> countOppositeParity(vector<int>& n) {
        int o=0 , e=0;
        for(int i : n){
            if(i%2==0) e++;
            else o++;
        }
        vector<int>v;
        for(int i=0;i<n.size();i++){
            if(n[i]%2!=0){
                o--;
                v.push_back(e);
            }
            else{
                e--;
                v.push_back(o);
            }
        }
        return v;
    }
};