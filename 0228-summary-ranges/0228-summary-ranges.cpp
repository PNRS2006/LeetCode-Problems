class Solution {
public:
    vector<string> summaryRanges(vector<int>& n) {
        vector<string>v;
        int i=0;
        while(i<n.size()){
            int s=n[i];
            while(i<n.size()-1 && n[i+1]==n[i]+1) i++;
            if(s==n[i]) v.push_back(to_string(n[i]));
            else v.push_back(to_string(s)+"->"+to_string(n[i]));
            i++;
        }
        return v;
    }
};