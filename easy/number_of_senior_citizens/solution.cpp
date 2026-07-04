class Solution {
public:
    int countSeniors(vector<string>& d) {
        int c=0,a;
        for(int i=0;i<d.size();i++)
        {
            a=((d[i][11]-'0')*10)+(d[i][12]-'0');
            if(a>60) c++;
        }
        return c;
    }
};