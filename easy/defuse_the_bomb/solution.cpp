class Solution {
public:
    vector<int> decrypt(vector<int>& c, int k) {
        int n=c.size();
        vector<int>a(n);
        for(int i=0;i<n;i++){
            int sum=0;
            if(k>=0){
                for(int j=1;j<=k;j++){
                    sum+=c[(i+j)%n];
                }
            }
            else{
                for(int j=1;j<=-k;j++){
                    sum+=c[(i-j+n)%n];
                }
            }
            a[i]=sum;
        }
        return a;
    }
};