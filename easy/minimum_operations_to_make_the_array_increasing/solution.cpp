class Solution {
public:
    int minOperations(vector<int>& n) {
        long long c=0;
        for(int i=1;i<n.size();i++){
            if(n[i] <= n[i-1]){
                int a=n[i-1]-n[i]+1;
                n[i]+=a;
                c+=a;
            }
        }
        return c;
    }
};