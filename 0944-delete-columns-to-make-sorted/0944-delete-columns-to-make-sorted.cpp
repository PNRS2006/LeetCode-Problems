class Solution {
public:
    int minDeletionSize(vector<string>& s) {
        int n=s.size() ,c=0 , m=s[0].size();
        for(int j=0;j<m;j++){
            bool f=1;
            for(int i=1;i<n;i++){
                if(s[i-1][j]>s[i][j]) f=0;
            }
            if(!f) c++;
        }
        return c;
    }
};