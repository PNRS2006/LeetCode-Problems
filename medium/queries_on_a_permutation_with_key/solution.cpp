class Solution {
public:
    vector<int> processQueries(vector<int>& q, int m) {
        vector<int>v;
        deque<int>a;
        for(int i=0 ; i<m ; i++) a.push_back(i+1);
        for(int i=0 ; i<q.size() ;){
            auto it = find(a.begin(),a.end(),q[i]);
            int ind = it-a.begin();
            a.erase(it);
            a.push_front(q[i]);
            v.push_back(ind);
            i++;
        }
        return v;
    }
};