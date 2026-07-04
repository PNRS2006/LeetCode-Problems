class Solution {
public:
    int strStr(string h, string n) {
        int s = n.size();
        if(h.size()<s) return -1;
        for(int i=0;i<=h.size()-s;i++){
            string j = h.substr(i,s);
            if(j==n) return i;
        }
        return -1;
    }
};