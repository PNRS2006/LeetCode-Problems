class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& n) {
        vector<int>v;
        vector<int>e;
        vector<int>o;
        for(int i=0;i<n.size();i++){
            if(i%2==0) e.push_back(n[i]);
            else o.push_back(n[i]);
        }
        sort(e.begin(),e.end());
        sort(o.rbegin(),o.rend());
        int i=0;
        int j=0;
        int e1 = e.size();
        int o1 = o.size();
        int x = (e.size()+o.size()) - abs(e1-o1);
        while(v.size()<x){
            v.push_back(e[i++]);
            v.push_back(o[j++]);
        }
        while(v.size()<n.size() && e1>o1){
            v.push_back(e[i++]);
        }
        while(v.size()<o.size() && o1>e1){
            v.push_back(o[j++]);
        }
        return v;
    }
};