class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& a) {
        int n = a.size();
        int m = a[0].size();
        int top = 0;
        int left = 0;
        int right = m-1;
        int bot = n-1;
        vector<int>v;
        while(top<=bot && left<=right){
            for(int i=left;i<=right;i++){
                v.push_back(a[top][i]);
            }
            top++;
            for(int i=top;i<=bot;i++){
                v.push_back(a[i][right]);
            }
            right--;
            if(top <= bot){
                for(int i=right;i>=left;i--){
                    v.push_back(a[bot][i]);
                }
                bot--;
            }
            if(left <= right){
                for(int i=bot;i>=top;i--){
                    v.push_back(a[i][left]);
                }
                left++;
            }
        }
        return v;
    }
};
