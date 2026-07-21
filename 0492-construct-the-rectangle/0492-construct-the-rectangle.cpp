class Solution {
private:
    bool isp(int n) {
    if (n<=1) return false;
    if (n<=3) return true;           
    if (n%2==0 || n%3==0) return false; 

    for(int i=5;i<=sqrt(n);i+=6) {
        if (n%i==0 || n%(i+2)==0) return false;
    }
    return true;
}
public:
    vector<int> constructRectangle(int a) {
        int k=sqrt(a);
        if(isp(a)) return {a,1};
        if(k*k==a) return {k,k};
        for(int i=sqrt(a);i>=1;i--){
            if(a%i==0) return {a/i,i};
        }
        return {0,0};
    }
};
