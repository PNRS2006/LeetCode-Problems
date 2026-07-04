class Solution {
public:
    int maxBottlesDrunk(int n, int e) {
        if(n<e) return n;
        int emp_bot = n-e+1;
        e=e+1;
        int cnt = 0;
        while(emp_bot>=e){
            emp_bot -= e;
            emp_bot++;
            cnt++;
            e++;
        }
        return n+cnt+1;
    }
};