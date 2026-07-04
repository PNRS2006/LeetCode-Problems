class Solution {
public:
    int minimumBoxes(vector<int>& a, vector<int>& c) {
        sort(c.rbegin(),c.rend());
        int e=0;
        for(int i : a) e+=i;
        int i=0;
        while(e>c[i]){
            if(e>c[i]) {
                e-=c[i];
                i++;
            }
            else break;
        }
        return i+1;
    }
};