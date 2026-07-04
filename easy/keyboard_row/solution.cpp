class Solution {
public:
    vector<string> findWords(vector<string>& w) {
        vector<string>v;
        set<char> s1{'q','w','e','r','t','y','u','i','o','p'};
        set<char> s2{'a','s','d','f','g','h','j','k','l'};
        set<char> s3{'z','x','c','v','b','n','m'};
        for(string s : w){
            int a=0,b=0,c=0;
            for(int i=0;i<s.size();i++){
                char h = tolower(s[i]);
                if(s1.count(h)) a++;
                if(s2.count(h)) b++;
                if(s3.count(h)) c++;
            }
            cout << a << b << c << " ";
            if(a==s.size() || b==s.size() || c==s.size()) v.push_back(s); 
        }
        return v;
    }
};