class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int>v;
        vector<int>n(A.size()+1,0);
        int c=0;
        for(int i=0;i<A.size();i++){
            n[A[i]]++;
            if(n[A[i]]==2) c++;
            n[B[i]]++;
            if(n[B[i]]==2) c++;
            v.push_back(c);
        }
        return v;
    }
};