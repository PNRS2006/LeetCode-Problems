class Solution {
public:
    vector<int> plusOne(vector<int>&d) {
        int n=d.size();
        vector<int>a(n,0);
        int c=0;
        for(int i : d) if(i==9) c++;
        if(c==n) {
            a.insert(a.begin(), 1);
            return a;
        }
        else if(d[n-1]!=9){
            d[n-1] = d[n-1]+1;
            return d;
        }
        int x=-1,y=-1;
        for(int i=0;i<n-1;i++){
            if(d[i]!=9 &&  d[i+1]==9) {
                y=i;
                x=i+1;
            }
        }
        d[y] = d[y]+1;
        fill(d.begin()+x,d.end(),0);
        return d;
    }
};