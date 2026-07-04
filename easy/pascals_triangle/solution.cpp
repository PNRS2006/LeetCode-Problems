class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>>a;
        int k=1;
        vector<int>b;
        b.push_back(1);
        a.push_back(b);
        while(k<n){
            vector<int>c(b.size()+1);
            c[0]=1;
            c[b.size()]=1;
            for(int i=1;i<b.size();i++){
                if(c.size()==b.size()){
                    c.push_back(1);
                    break;
                }
                c[i]=(b[i-1]+b[i]);
            }
            a.push_back(c);
            b=c;
            k++;
        }
        return a;
    }
};