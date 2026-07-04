class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        vector<string>a;
        while(i<s.size()){
            while(i<s.size() && s[i]==' ') {
                i++;
            }
            string st="";
            while(i<s.size() && s[i]!=' '){
                st+=s[i];
                i++;
            }
            if(!empty(st)) a.push_back(st);
        }
        reverse(a.begin(),a.end());
        string w="";
        for(int i=0;i<a.size();i++){
            w+=a[i];
            if(i!=a.size()-1) w+=' ';
        }
        return w;
    }
};