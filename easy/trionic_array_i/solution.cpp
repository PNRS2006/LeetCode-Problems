class Solution {
public:
    bool isTrionic(vector<int>& n) {
        int a=n.size();
        if(a<3) return false;
        int i=0;
        while(i+1 < a && n[i]<n[i+1]) i++;
        if(i==0 || i==a-1) return false;
        int j=i;
        while(j+1 < a && n[j]>n[j+1]) j++;
        if(j==0 || j==a-1) return false;
        int k=j;
        while(k+1 < a && n[k]<n[k+1]) k++;
        if(k!=a-1) return false;
        return true;
    }
};