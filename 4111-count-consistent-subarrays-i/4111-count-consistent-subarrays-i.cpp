class Solution {
public:
    int countConsistent(vector<int>& n) {
        int c=0;
        for(int i=0;i<n.size();i++){
            int mi=n[i];
            int k=n[i];
            for(int j=i;j<n.size();j++){
                k=(k&n[j]);
                mi = min(mi,n[j]);
                if(mi==k) c++;
            }
        }
        return c;
    }
};