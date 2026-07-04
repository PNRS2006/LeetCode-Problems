class Solution {
public:
    int sum(int n){
        int c=0;
        while(n>0){
            c+=n%10;
            n/=10;
        }
        return c;
    }
    int smallestIndex(vector<int>& n) {
        for(int i=0;i<n.size();i++){
            if(sum(n[i])==i) return i;
        }
        return -1;
    }
};