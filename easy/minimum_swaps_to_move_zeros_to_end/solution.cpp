class Solution {
public:
    int minimumSwaps(vector<int>& n) {
        int c=0;
        for(int i : n) if(i==0) c++;
        int k=0;
        for(int i=n.size()-c;i<n.size();i++) if(n[i]!=0) k++;
        return k;
    }
};