class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(),arr2.end());
        int c=0;
        for(int i : arr1){
            bool f=1;
            for(int j : arr2) if(abs(i-j)<=d) f=0;
            if(f) c++;
        }
        return c;
    }
};