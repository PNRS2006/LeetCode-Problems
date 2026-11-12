class Solution {
public:
    int longestMonotonicSubarray(vector<int>& n) {
        int d=1, in=1, dm=1, im=1;
        for(int i=0;i<n.size()-1;i++){
            if(n[i]<n[i+1]) d++;
            else d=1;
            dm = max(dm,d);
        }
        for(int i=0;i<n.size()-1;i++){
            if(n[i]>n[i+1]) in++;
            else in=1;
            im = max(im,in);
        }
        return max(dm,im);
    }
};