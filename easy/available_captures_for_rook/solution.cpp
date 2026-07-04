class Solution {
public:
    int numRookCaptures(vector<vector<char>>& b) {
        int k=-1,l=-1;
        for(int i=0;i<b.size();i++){
            for(int j=0;j<b[0].size();j++){
                if(b[i][j] == 'R'){
                    k=i;
                    l=j;
                }
            }
        }
        int c=0;
        for(int i=l;i<b.size();i++){
            if(b[k][i]=='B') break;
            else if(b[k][i]=='p'){
                c++;
                break;
            }
        }
        for(int i=l;i>=0;i--){
            if(b[k][i]=='B') break;
            else if(b[k][i]=='p'){
                c++;
                break;
            }
        }
        for(int i=k;i>=0;i--){
            if(b[i][l]=='B') break;
            else if(b[i][l]=='p'){
                c++;
                break;
            }
        }
        for(int i=k;i<b[0].size();i++){
            if(b[i][l]=='B') break;
            else if(b[i][l]=='p'){
                c++;
                break;
            }
        }
        return c;
    }
};