class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& c) {
        int i=0,j=0;
        for(string k : c){
            if(k=="RIGHT") j++;
            if(k=="LEFT") j--;
            if(k=="UP") i--;
            if(k=="DOWN") i++;
        }
        return (n*i)+j;

    }
};