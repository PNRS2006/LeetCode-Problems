class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) {
        int a=-1,b=-1;
        int i=0,j=n.size()-1;
        while(i<j){
            if(n[i]+n[j]==t){
                a=i+1;
                b=j+1;
                break;
            }
            else if(n[i]+n[j]>t) j--;
            else if(n[i]+n[j]<t) i++;
        }
        return {a,b};
    }
};