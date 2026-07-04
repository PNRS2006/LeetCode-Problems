class Solution {
public:
    int numUniqueEmails(vector<string>& e) {
        set<string>uni;
        for(string s : e){
            string ln="";
            string dm="";
            int i=0;
            while(s[i]!='+' && i<s.size() && s[i]!='@'){
                if(s[i]!='.') ln+=s[i];
                i++;
            }
            while(s[i]!='@' && i<s.size()){
                i++;
            }
            while(i<s.size()){
                dm+=s[i];
                i++;
            }
            string t = ln+dm;
            uni.insert(t);
        }
        return uni.size();
    }
};