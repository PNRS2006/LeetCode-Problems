class Solution {
public:
    int earliestFinishTime(vector<int>& l1, vector<int>& l2, vector<int>& w1, vector<int>& w2) {
        int m=INT_MAX,f,r;
        for(int i=0;i<l1.size();i++){
            for(int j=0;j<w1.size();j++){
                f=l1[i]+l2[i];
                int w=max(f,w1[j]);
                r=w+w2[j];
                m = (m<r)? m : r;
            }
        }
        for(int i=0;i<l1.size();i++){
            for(int j=0;j<w1.size();j++){
                f=w1[j]+w2[j];
                int l=max(f,l1[i]);
                r=l+l2[i];
                m = (m<r)? m : r;
            }
        }
        return m;
    }
};