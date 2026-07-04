class Solution {
public:
    int maximumBags(vector<int>& c, vector<int>& r, int a) {
        vector<int>b;
        int d=0;
        for(int i=0;i<c.size();i++){
            int e=c[i]-r[i];
            if(e==0) d++;
            else b.push_back(e);
        }
        sort(b.begin(),b.end());
        int i=0;
        while(i<b.size() && b[i]<=a){
            a=a-b[i];
            d++;
            i++;
        }
        return d;
    }
};