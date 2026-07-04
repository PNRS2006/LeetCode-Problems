class Solution {
public:
    vector<int> frequencySort(vector<int>& n) {
        unordered_map<int,int>m;
        for(int i : n) m[i]++;
        sort(n.begin(),n.end() , [&](int a , int b){
            if(m[a] == m[b]) return a>b;
            return m[a] < m[b];
        });
        return n;
    }
};