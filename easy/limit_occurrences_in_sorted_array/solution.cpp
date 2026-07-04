class Solution {
public:
    vector<int> limitOccurrences(vector<int>& n, int k) {
        unordered_map<int,int>m;
        set<int>s(n.begin(),n.end());
        for(int i : n) m[i]++;
        vector<int>v;
        for(auto i=s.begin();i!=s.end();i++){
            int l=*i;
            if(m[l]>=k){
                int f=k;
                while(f--) v.push_back(l);
            }
            else while(m[l]--) v.push_back(l);
        }
        return v;
    }
};