class Solution {
public:
    int countPoints(string r) {
        int cnt = 0;
        char i = '0';
        while(i <= '9'){
            bool re = false;
            bool b = false;
            bool g = false;
            for(int j = 1 ; j < r.size() ; j++){
                if(r[j] == i && r[j-1] == 'R') re = true;
                if(r[j] == i && r[j-1] == 'B') b = true;
                if(r[j] == i && r[j-1] == 'G') g = true;
            }
            if(re && b && g) cnt++;
            i++;
        }
        return cnt;
    }
};