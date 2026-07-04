class Solution {
public:
    int canBeTypedWords(string t, string b) {
        vector<string>v;
        int i=0;
        while(i<t.size()){
            string s="";
            while(i<t.size() && t[i]==' ') i++;
            while(i<t.size() && t[i]!=' '){
                s+=t[i];
                i++;
            }
            v.push_back(s);
        }
        int h=0;
        for(string c : v){
            string f=c;
            bool fun = true;
            for(int i=0;i<f.size();i++){
                for(int j=0;j<b.size();j++){
                    if(f[i]==b[j]) fun=false;
                }
            }
            if(fun) h++;
        }
        return h;
    }
};