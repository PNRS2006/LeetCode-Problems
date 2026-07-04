class Solution {
public:
    vector<int> rotateElements(vector<int>& n, int k) {
        vector<int>v;
        
        for(int i : n) if(i>=0) v.push_back(i);
        int m=v.size();
        if(m==0) return n;
        k%=m;
        vector<int>a(m);
        for(int i=0;i<m;i++){
            a[i] = v[(i+k)%m];
        }
        int j=0;
        for(int i=0;i<n.size();i++){
            if(n[i] >= 0){
                n[i] = a[j++];
            }
        }
        return n;
    }
};