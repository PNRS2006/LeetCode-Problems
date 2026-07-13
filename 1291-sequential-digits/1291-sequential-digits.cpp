class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>v;
        string s = "123456789";
        int l=log10(low)+1;
        int r=min((int)log10(high)+1,9);

        for(auto j=l;j<=r;j++){
            for(int i=0;i+j<=9;i++){
                int n = stoi(s.substr(i,j));
                if(n>=low && n<=high) v.push_back(n);
            }
        }
        sort(v.begin(),v.end());
        return v;
    }
};