class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& w, char s) {
        vector<string>v;
        for(int j=0;j<w.size();){
            int i=0;
            string a = w[j];
            cout << a << " ";
            string t = "";
            while(i<a.size()){
                while(i<a.size() && a[i]!=s){
                    t+=a[i];
                    i++;
                }
                if(t.size() > 0) v.push_back(t);
                if(a[i]==s) {
                    t = "";
                    i++;
                }
            }
            j++;
        }
        return v;
    }
};