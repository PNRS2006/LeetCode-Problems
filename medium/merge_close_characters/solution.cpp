class Solution {
public:
    string mergeCharacters(string s, int k) {
        while(true){
            bool f = false;
            for(int i=0;i<s.size();i++){
                int e = min((int)s.size(),i+k+1);
                for(int j=i+1;j<e;j++){
                    if(s[i]==s[j]) {
                        s.erase(j,1);
                        f = true;
                        break;
                    }
                }
                if(f) break;
            }
            if(!f) break;
        }
        return s;
    }
};