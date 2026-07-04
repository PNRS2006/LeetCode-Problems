class Solution {
public:
    string tictactoe(vector<vector<int>>& m) {
        vector<vector<char>>v(3,vector<char>(3,' '));
        for(int k=0;k<m.size();k+=2){
            int i=m[k][0] , j=m[k][1];
            v[i][j] = 'X';            
        }
        for(int k=1;k<m.size();k+=2){
            int i=m[k][0] , j=m[k][1];
            v[i][j] = 'O';            
        }
        for(int i=0;i<3;i++){
            if(v[0][i]==v[1][i] && v[0][i]==v[2][i]){
                if(v[0][i]=='X') return "A";
                else if(v[0][i]=='O') return "B";
            }
        }
        for(int i=0;i<3;i++){
            if(v[i][0]==v[i][1] && v[i][0]==v[i][2]){
                if(v[i][0]=='X') return "A";
                else if(v[i][0]=='O') return "B";
            }
        }
        if(v[0][0]==v[1][1] && v[1][1]==v[2][2]){
            if(v[0][0]=='X') return "A";
            else if(v[0][0]=='O') return "B";
        }
        if(v[2][0]==v[1][1] && v[1][1]==v[0][2]){
            if(v[1][1]=='X') return "A";
            else if(v[1][1]=='O') return "B";
        }
        if(m.size()==9) return "Draw";
        return "Pending";
    }
};