class Solution {
public:
    vector<int> distributeCandies(int c, int n) {
        vector<int>v(n,0);
        int k=1;
        while(c>0){
            int j=0;
            for(int i=j;i<n;i++){
                if(c>=k){
                    v[i]+=k;
                    c-=k;
                    k++;
                }
                else{
                    v[i]+=c;
                    c=0;
                }
            }
        }
        return v;
    }
};