class Solution {
public:
    vector<int> mostVisited(int n, vector<int>& r) {
        vector<int>v(n+1,0);
        int c=r[0];
        for(int i=0;i<r.size()-1;i++){
            while(c!=r[i+1]+1){
                if(c>n) c=1;
                else {
                    v[c]++;
                    c++;
                }
                cout << c << " ";
            }
        }
        int ma=0;
        for(int i : v) ma=max(ma,i);
        vector<int>a;
        for(int i=1;i<v.size();i++) if(v[i]==ma) a.push_back(i);
        return a;
    }
};