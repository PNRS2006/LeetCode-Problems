class Solution {
public:
    int minElement(vector<int>& n) {
        int m = INT_MAX;
        for(int i : n){
            int s=0;
            while(i>0){
                s+=i%10;
                i/=10;
            }
            m = min(m , s);
        }
        return m;
    }
};