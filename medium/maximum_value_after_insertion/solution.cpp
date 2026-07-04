class Solution {
public:
    string maxValue(string n, int x) {
        char q = x+'0';
        string s = "";
        int a = n.size();

        if(n[0]=='-'){
            for(int i=0;i<n.size();i++){
                if(n[i]>q) {
                    a=i;
                    break;
                }
            }
        }
        else{
            for(int i=0;i<n.size();i++){
                if(n[i]<q) {
                    a=i;
                    break;
                }
            }
        }
        for(int i=0;i<a;i++) s.push_back(n[i]);
        s.push_back(q);
        for(int i=a;i<n.size();i++) s.push_back(n[i]);
        return s;
    }
};