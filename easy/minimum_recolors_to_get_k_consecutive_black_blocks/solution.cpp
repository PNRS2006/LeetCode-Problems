class Solution {
public:
    int minimumRecolors(string b, int k) {
        int w=0;
        for(int i=0;i<k;i++) if(b[i]=='W') w++;
        int k1=w;
        for(int i=k;i<b.size();i++){
            if(b[i-k]=='W') w--;
            if(b[i]=='W') w++;
            k1=min(k1,w);
        }
        return k1;
    }
};