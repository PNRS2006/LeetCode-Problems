class Solution {
public:
    string largestGoodInteger(string n) {
        int a=n.size();
        char b;
        int c=INT_MIN;
        for(int i=1;i<a-1;i++){
            if(n[i-1]==n[i] && n[i]==n[i+1]){
                if(n[i]-'0'>c){
                    c=n[i]-'0';
                    b = n[i];
                }
            }
        }
        if(c==INT_MIN) return "";
        return string(3,b);
    }
};