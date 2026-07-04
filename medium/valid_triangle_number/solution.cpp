class Solution {
public:
    int triangleNumber(vector<int>& n) {
        sort(n.begin(),n.end());
        int c=0;
        
        for(int i=n.size()-1;i>=0;i--){
            int l=0;
            int r=i-1;
            while(l<r){
                if(n[i]<n[l]+n[r]) {
                    c+=r-l;
                    r--;
                }
                else l++;
            }
        }
        return c;
    }
};