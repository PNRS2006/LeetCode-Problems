class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n=s.size()+1;
        vector<int>a;
        int e=s.size();
        int d=0;
        int i=0;
        while(n--){
            char c=s[i];
            if(c=='D'){
                a.push_back(e);
                e--;
                i++;
            }
            else{
                a.push_back(d);
                d++;
                i++;
            }
        }
        return a;
    }
};