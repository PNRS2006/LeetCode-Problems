class Solution {
public:
    int passwordStrength(string p) {
        set<char>st;
        int c=0;
        for(char i : p){
            if(st.count(i)) continue;
            else{
                st.insert(i);
                if(i>='a' && i<='z') c+=1;
                else if(i>='A' && i<='Z') c+=2;
                else if(i>='0' && i<='9') c+=3;
                else c+=5;
            }   
        }
        return c;
    }
};