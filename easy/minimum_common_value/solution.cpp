class Solution {
public:
    int getCommon(vector<int>& n, vector<int>& m) {
        int i=0 , j=0;
        while(i<n.size() && j<m.size()){
            if(n[i]==m[j]) return n[i];
            else if(n[i]>m[j]) j++;
            else if(m[j]>n[i]) i++;
        }
        return -1;
    }
};