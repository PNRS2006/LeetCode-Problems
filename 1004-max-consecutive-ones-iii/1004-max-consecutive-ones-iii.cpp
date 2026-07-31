class Solution {
public:
    int longestOnes(vector<int>& n, int k) {
        int r=0 ,l=0 , o=0 , z=0 , w=0; 
        while(r<n.size()){
            n[r]==0? z++ : o++;
            if(z>k){
                n[l]==0? z-- : o--;
                l++;
            }
            w = max(w,r-l+1);
            r++;
        }
        return w;
    }
};