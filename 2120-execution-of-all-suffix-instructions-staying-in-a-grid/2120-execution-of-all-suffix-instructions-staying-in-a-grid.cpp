class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& P, string s) {
        int m = s.size();
        vector<int>v;
        for(int i=0;i<m;i++){
            int j=i;
            int r=P[0] , c=P[1] , cnt=0;
            while(r<n && c<n && j<m){
                if(s[j]=='R') c++;
                else if(s[j]=='L') c--;
                else if(s[j]=='U') r--;
                else r++;
                cnt++;

                if(r<0 || r>n-1 || c<0 || c>n-1){
                    v.push_back(cnt-1);
                    break;
                }
                j++;
            }
            if(j==m) v.push_back(cnt);
        }
        return v;
    }
};