class Solution {
public:
    int dominantIndices(vector<int>& n) {
        int a=0;
        for(int i=0;i<n.size()-1;i++){
            double sum = 0;
            for(int j=i+1;j<n.size();j++){
                sum += n[j];
            }
            double avg = sum/(n.size()-i-1);
            if(n[i]>avg) a++;
        }
        return a;
    }
};