class Solution {
public:
    int smallestIndex(vector<int>& n) {
        bool b=0;
        for(int i=0;i<n.size();i++){
            int k=n[i];
            int c=0;
            while(k>0){
                c+=(k%10);
                k/=10;
            }
            if(c==i) return i;
        }
        return -1;
    }
};