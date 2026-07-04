class Solution {
public:
    bool checkTwoChessboards(string c1, string c2) {
        bool co1=false,co2=false;
        if((c1[0]-'a'+1)%2==0 && (c1[1]-'0')%2!=0){
            co1 = true;
        }
        else if((c1[0]-'a'+1)%2!=0 && (c1[1]-'0')%2==0){
            co1 = true;
        }
        if((c2[0]-'a'+1)%2==0 && (c2[1]-'0')%2!=0){
            co2 = true;
        }
        else if((c2[0]-'a'+1)%2!=0 && (c2[1]-'0')%2==0){
            co2 = true;
        }
        return co1==co2;
    }
};