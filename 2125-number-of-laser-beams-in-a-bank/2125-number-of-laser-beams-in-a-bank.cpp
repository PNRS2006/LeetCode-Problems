class Solution {
public:
    int numberOfBeams(vector<string>& b) {
        int n=b.size() , m=b[0].size();
        int mi=0 , prev=0;
        for(int i=0;i<n;i++){
            int s=0;
            for(int j=0;j<m;j++){
                if(b[i][j]=='1') s++;
            }
            mi += s*prev;
            if(s!=0) prev = s;
        }
        return mi;
    }
};