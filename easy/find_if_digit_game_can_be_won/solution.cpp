class Solution {
public:
int cin(int n){
    int c=0;
    while(n>0){
        c++;
        n/=10;
    }
    return c;
}
    bool canAliceWin(vector<int>& n) {
        int c=0,d=0;
        for(int i=0;i<n.size();i++){
            if(cin(n[i])==1) c+=n[i];
            else if(cin(n[i])==2) d+=n[i];
        }
        if(c==d) return false;
        return true;
    }
};