class Solution {
public:
    int bitcount(int n){
        int c=0;
        while(n){
            if(n&1) c++;
            n>>=1;
        }
        return c;
    }
    vector<string> readBinaryWatch(int t) {
        vector<string>v;
        if(t>8) return v;
        for(int h=0;h<12;h++){
            for(int m=0;m<60;m++){
                string ti = to_string(h)+":";
                if(m<10) ti+="0"+to_string(m);
                else ti+=to_string(m);
                if(bitcount(h)+bitcount(m)==t) v.push_back(ti);
            }
        }
        return v;
    }
};