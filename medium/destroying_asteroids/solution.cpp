class Solution {
public:
    bool asteroidsDestroyed(int m, vector<int>& a) {
        long long n = m;
        sort(a.begin(),a.end());
        for(int i : a){
            if(i>n) return false;
            else n += i;
        }
        return true;
    }
};