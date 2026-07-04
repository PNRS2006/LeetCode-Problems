class Solution {
public:
    vector<string> sortPeople(vector<string>& n, vector<int>& h) {
        map<int,string>p;
        for(int i=0;i<n.size();i++){
            p.insert({h[i],n[i]});
        }
        vector<string>s;
        for(auto &i : p){
            s.push_back(i.second);
        }
        reverse(s.begin(),s.end());
        return s;
    }
};