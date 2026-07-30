class Solution {
public:
    int minimumPushes(string w) {
        int c=0;
        for(int i=0;i<w.size();i++) c+=(i/8)+1;
        return c;
    }
};