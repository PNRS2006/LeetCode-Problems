class Solution {
public:
    int countPartitions(vector<int>& n) {
        int i=1,c=0;
        while(i<n.size()){
            int e=0,o=0;
            for(int j=0;j<=i;j++) e+=n[j];
            for(int j=i+1;j<n.size();j++) o+=n[j];
            if(abs(e-o)%2==0) c++;
            i++;
        }
        return c;
    }
};