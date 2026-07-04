class Solution {
public:
    int compareBitonicSums(vector<int>& n) {
        int a = max_element(n.begin(),n.end())-n.begin();
        long long mi=0 , t=0;
        for(int i=0;i<n.size();i++) {
            t+=n[i];
            if(i<=a) mi+=n[i];
        }
        long long mx = t-mi+n[a]; 
        if(mi==mx) return -1;
        return (mi<mx)? 1 : 0;
    }
};