class Solution {
public:
    int calPoints(vector<string>& o) {
        vector<int>v;
        for(string i : o){
            if(i == "C") v.erase(v.begin()+v.size()-1);
            else if(i == "D") v.push_back(v[v.size()-1]*2);
            else if(i == "+") v.push_back(v[v.size()-1]+v[v.size()-2]);
            else v.push_back(stoi(i));
        }
        int c = 0;
        for(int i : v) {
            cout << i << " ";
            c += i;
        }
        return c;
    }
};