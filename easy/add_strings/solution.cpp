class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.size()-1;
        int j = num2.size()-1;
        int c = 0;
        string s = "";
        while(i>=0 || j>=0 || c){
            int n = (i>=0 ? (num1[i--]-'0') : 0);
            int m = (j>=0 ? (num2[j--]-'0') : 0);
            int sum = n+m+c;
            c = sum/10;
            int d = sum%10;
            s += d+'0';
        }
        reverse(s.begin(),s.end());
        return s;
    }
};