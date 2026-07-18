class Solution {
public:
    int findTheWinner(int n, int k) {
        deque<int>q;
        for(int i=1;i<=n;i++) q.push_back(i);
        int c=0;
        while(q.size()>1){
            if(c==k-1){
                q.pop_front();
                c=0;
            }
            else{
                q.push_back(q.front());
                q.pop_front();
                c++;
            }
        }
        return q.front();
    }
};