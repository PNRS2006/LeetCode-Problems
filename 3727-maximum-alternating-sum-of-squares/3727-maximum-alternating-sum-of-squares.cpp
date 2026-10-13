class Solution {
public:
    long long maxAlternatingSum(vector<int>& n) {
        long long c=0;
        vector<int>v(n.size());
        for(int i=0;i<n.size();i++){
            v[i] = n[i]*n[i];
        }
        sort(v.begin(),v.end());
        int i=0, j=n.size()-1;
        while(i<=j){
            c+=v[j--];
            c-=v[i++];
        }
        return v.size()%2==0? c : c+v[v.size()/2];
    }
};