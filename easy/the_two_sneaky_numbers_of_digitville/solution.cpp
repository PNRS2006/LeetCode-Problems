class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& a) {
        vector<int>b;
        int n=a.size();
        sort(a.begin(),a.end());
        for(int i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1]) b.push_back(a[i]);
        }
        return b;
    }
};