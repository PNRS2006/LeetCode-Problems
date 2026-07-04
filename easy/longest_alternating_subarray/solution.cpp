class Solution {
public:
    int alternatingSubarray(vector<int>& n) {
        int prev = 0;
        int ans = -1;
        int len = 0;
        for(int i=1;i<n.size();i++){
            int diff = n[i]-n[i-1];
            if((prev==-1 && diff==1) || (prev==1 && diff==-1)) len++;
            else if(diff == 1) len = 2; 
            else len = 1;
            if(len >= 2) ans = max(ans,len);
            prev = diff;
        }
        return ans;
    }
};