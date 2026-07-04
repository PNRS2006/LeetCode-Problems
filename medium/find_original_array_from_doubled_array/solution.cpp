class Solution {
public:
    vector<int> findOriginalArray(vector<int>& c) {
        if(c.size()%2!=0) return {};
        vector<int>b;
        unordered_map<int,int>fr;
        for(int i : c) fr[i]++;
        sort(c.begin(),c.end());
        for(auto i : c){
            if(fr[i]==0) continue;
            if(fr[i*2]==0) return {};
            b.push_back(i);
            fr[i]--;
            fr[2*i]--;
        }
        return b;
    }
};