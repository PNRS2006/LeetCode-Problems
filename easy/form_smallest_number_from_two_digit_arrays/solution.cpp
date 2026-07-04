class Solution {
public:
    int minNumber(vector<int>& n1, vector<int>& n2){ 
        sort(n1.begin(),n1.end());
        sort(n2.begin(),n2.end());
        for(int i=0;i<n1.size();i++){
            for(int j=0;j<n2.size();j++){
                if(n1[i]==n2[j]) return n1[i];
            }
        }
        int a=n1[0];
        int b=n2[0];
        if(a<=b) return (a*10)+b;
        return (b*10)+a;
    }
};