class Solution {
public:
    int countMajoritySubarrays(vector<int>& n, int t) {
        if(find(n.begin(),n.end(),t)==n.end()) return 0;
        int cnt=0;
        for(int i=0;i<n.size();i++){
            int m=0;
            for(int j=i;j<n.size();j++){
                if(n[j]==t) m++;
                int k=(j-i+1)/2;
                if(k<m) cnt++;
            }
        }
        return cnt;

    }
};