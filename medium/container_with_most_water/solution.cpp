class Solution {
public:
    int maxArea(vector<int>& h) {
        int i=0,j=h.size()-1;
        int c=INT_MIN;
        while(i<j){
            int k = min(h[i],h[j])*(j-i);
            if(h[i]<h[j]) i++;
            else j--;
            c=max(c,k);
        }
        return c;
    }
};