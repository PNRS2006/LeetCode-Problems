class Solution {
public:
    int smallestAbsent(vector<int>& n) {
        sort(n.begin(),n.end());
        int c=0,k=n.size();
        for(int i : n) c+=i;
        int m=max(c/k,0);
        int x=m+1;
        for(int i=0;i<k;i++){
            if(!binary_search(n.begin(),n.end(),x)) break;
            else x++;
        }
        return x;
    }
};