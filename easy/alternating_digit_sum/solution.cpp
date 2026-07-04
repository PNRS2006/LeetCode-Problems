class Solution {
public:
    int alternateDigitSum(int n) {
        int c=0,s=0;
        vector<int>v;
        while(n){
            v.push_back(n%10);
            n/=10;
        }
        reverse(v.begin(),v.end());
        if(v.size()%2!=0) v.push_back(0);
        for(int i=0;i<v.size()-1;i+=2){
            c+=v[i];
            s+=v[i+1];
        }
        return c-s;
    }
};