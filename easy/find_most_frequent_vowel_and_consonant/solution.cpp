class Solution {
public:
    int maxFreqSum(string s) {
        vector<int> c1(27,0);
        vector<int> c2(27,0);
        int n;
        for(auto i : s)
        {
            if(i=='a' || i=='e' || i=='i' || i=='o' || i=='u')
            {
                n=i-'a'+1;
                c1[n]++;}
            else
            {
                n=i-'a'+1;
                c2[n]++;
            }
        }
        int a = *max_element(c1.begin(),c1.end());
        int b = *max_element(c2.begin(),c2.end());
        return a+b;
    }
};