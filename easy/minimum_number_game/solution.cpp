class Solution {
public:
    vector<int> numberGame(vector<int>& n) {
        sort(n.begin(),n.end());
        for(int i=0;i<n.size()-1;i=i+2){
            int temp = n[i];
            n[i]=n[i+1];
            n[i+1]=temp;
        }
        return n;
    }
};