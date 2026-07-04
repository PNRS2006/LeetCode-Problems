class Solution {
public:
    int scoreDifference(vector<int>& n) {
        int fs=0, ss=0;
        bool fp = true;
        for(int i=0;i<n.size();i++){
            if(n[i]%2!=0) fp = !fp;
            if((i+1)%6==0) fp = !fp;
            if(fp) fs+=n[i];
            else ss+=n[i];
        }
        return fs-ss;
    }
};