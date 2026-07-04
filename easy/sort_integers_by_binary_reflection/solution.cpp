class Solution {
public:
    int ref(int n){
        string s;
        while(n > 0){
            s.push_back('0' + (n & 1));
            n >>= 1;
        }
        return stoi(s, nullptr, 2);
    }

    vector<int> sortByReflection(vector<int>& n) {
        vector<pair<int,int>> v;
        for(int x : n) v.push_back({ref(x), x});
        sort(v.begin(), v.end(), [](auto &a, auto &b){
            if(a.first != b.first) return a.first < b.first;
            return a.second < b.second;
        });
        vector<int> c;
        for(auto &p : v) c.push_back(p.second);
        return c;
    }
};
