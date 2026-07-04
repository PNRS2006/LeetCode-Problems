class Solution {
public:
    vector<int> scoreValidator(vector<string>& e) {
        int c=0 , s=0;
        for(string t : e){
            if(t>="0" && t<="9") s+=stoi(t);
            if(t=="W") c++;
            if(c==10) break;
            if(t=="WD") s++;
            if(t=="NB") s++;
        }
        return {s,c};
    }
};