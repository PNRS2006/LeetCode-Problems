class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int top = 0;
        int bot = n-1;
        int left = 0;
        int right = n-1;
        vector<vector<int>>v(n,vector<int>(n));
        int c=1;
        while(top<=bot && left<=right){
            for(int i=left;i<=right;i++){
                v[top][i] = c++;
            }
            top++;
            for(int i=top;i<=bot;i++){
                v[i][right] = c++;
            }
            right--;
            if(top<=bot){
                for(int i=right;i>=left;i--){
                    v[bot][i] = c++;
                }
                bot--;
            }
            if(left<=right){
                for(int i=bot;i>=top;i--){
                    v[i][left] = c++;
                }
                left++;
            }
        }
        return v;
    }
};