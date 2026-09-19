class Solution {
public:
    double dis(int x1, int y1, int x2 , int y2){
        double k = sqrt(pow(x2-x1 , 2) + pow(y2-y1 , 2));
        return k;
    }
    bool checkOverlap(int r, int x, int y, int x1, int y1, int x2, int y2) {
        if (x >= x1 && x <= x2 && y >= y1 && y <= y2) return 1;
        for(int i=y1;i<=y2;i++){
            if(dis(x1,i,x,y)<=r || dis(x2,i,x,y)<=r) return 1;
        } 
        for(int i=x1;i<=x2;i++){
            if(dis(i,y1,x,y)<=r || dis(i,y2,x,y)<=r) return 1;
        }
        return 0;
    }
};