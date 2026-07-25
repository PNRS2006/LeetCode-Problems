class Solution {
public:
    int maxProduct(int n) {
        vector<int>arr;
        int i=0;
        while(n>0)
        {
            arr.push_back(n%10);
            n/=10;
        }
        sort(arr.begin(),arr.end());
        int a=arr.size();
        if(a<2) return 0;
        return arr[a-1]*arr[a-2];
    }
};