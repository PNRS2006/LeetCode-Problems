class Solution {
public:
    int maxSum(vector<int>& n) {
        if(n.size()<=1){
            return n[0];
        } 
        set<int>a;
        set<int>e;
        for(auto i : n){
            int b=i;
            if(i>0){
                a.insert(b);
            }
            else{
                e.insert(b);
            }
        }
        int d=0;
        for(auto i : n){
            if(i<0) d++;
        }
        int c=0;
        if(d==n.size()){
            int max=n[0];
            for(auto i : e){
                if(i>max) max=i;
            }
            c=max;
        }
        else{
            for(auto i : a){
                c+=i;
            }
        }
        return c;
    }
};