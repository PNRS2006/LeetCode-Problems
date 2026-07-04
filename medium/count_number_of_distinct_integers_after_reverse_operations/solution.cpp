class Solution {
public:
    int countDistinctIntegers(vector<int>& n) {
        set<int>s(n.begin(),n.end());
        for(int i : n){
            int k=0;
            while(i>0){
                k=(k*10)+i%10;
                i/=10;
            }
            if(!s.count(k)) s.insert(k);
        }
        return s.size();
    }
};