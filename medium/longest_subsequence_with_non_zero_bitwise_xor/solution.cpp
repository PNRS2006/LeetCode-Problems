class Solution {
public:
    int longestSubsequence(vector<int>& n) {
        if(n.empty()) return 0;
        int c=0;
        bool fun = false;
        for(int i=0;i<n.size();i++){
            c^=n[i];
            if(n[i]!=0) fun=true;
        }
        if(c!=0) return n.size();
        if(!fun) return 0;
        return n.size()-1;
    }
};
