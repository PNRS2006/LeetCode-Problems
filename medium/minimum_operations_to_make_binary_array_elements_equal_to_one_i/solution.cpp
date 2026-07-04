class Solution {
public:
    int minOperations(vector<int>& a) {
        int c=0;
        for(int i=0;i<=a.size()-3;i++){
            if(a[i]==0){
                a[i] = 1-a[i];
                a[i+1] = 1-a[i+1];
                a[i+2] = 1-a[i+2];
                c++;
            }
        }
        if(a[a.size()-1]==0 || a[a.size()-2]==0) return -1;
        return c; 
    }
};