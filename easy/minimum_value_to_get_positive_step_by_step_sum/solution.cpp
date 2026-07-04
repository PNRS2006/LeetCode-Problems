class Solution {
public:
    int minStartValue(vector<int>& n) {
        int i=1;
        while(i<=5050){
            bool ok=true;
            int d=i;
            for(int j : n){
                d+=j;
                if(d<1) ok=false;
            }
            if(!ok) i++;
            else break;;
        }
        return i;
    }
};