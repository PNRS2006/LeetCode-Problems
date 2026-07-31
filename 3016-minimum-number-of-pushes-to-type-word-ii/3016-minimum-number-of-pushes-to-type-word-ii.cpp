class Solution {
public:
    int minimumPushes(string w) {
        vector<int>v(26,0);
        for(char i : w) v[i-'a']++;
        sort(v.rbegin(),v.rend());
        int c=0 , i=0;
        while(i<v.size() && v[i]>0) {
            if(i<8) c+=v[i++];
            else if(i<16) c+=(v[i++]*2);
            else if(i<24) c+=(v[i++]*3);
            else c+=(v[i++]*4);
        } 
        return c;
    }
};