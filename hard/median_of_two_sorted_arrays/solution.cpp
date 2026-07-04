class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>a;
        for(int i : nums1){
            a.push_back(i);
        }
        for(int i : nums2){
            a.push_back(i);
        }
        sort(a.begin(),a.end());
        double b;
        int n=a.size();
        if(n%2!=0) b = a[n/2];
        else b = (a[(n/2)-1]+a[n/2])/2.0;
        return b;
    }
};