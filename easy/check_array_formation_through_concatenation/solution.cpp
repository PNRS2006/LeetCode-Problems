class Solution {
public:
    bool canFormArray(vector<int>& a, vector<vector<int>>& p) {
        set<int>s(a.begin(),a.end());
        int j=0;
        for(vector<int> &i : p){
            if(i.size()!=1){
                int l=i.size();
                for(int m=0;m<=a.size()-l;m++){
                    vector<int>v(a.begin()+m,a.begin()+m+l);
                    if(v==i) j++;
                }
            }
            else {
                if(s.count(i[0])) j++;
            }
        }
        return j==p.size();
    }
};