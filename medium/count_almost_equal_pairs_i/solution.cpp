bool fun(int a,int b){
    string s1=to_string(a);
    string s2=to_string(b);
    if(s1.size()<s2.size()) s1=string(s2.size()-s1.size(),'0')+s1;
    else if(s2.size()<s1.size()) s2=string(s1.size()-s2.size(),'0')+s2;
    vector<pair<char,char>>m;
    for(int i=0;i<s1.size();i++){
        if(s1[i]!=s2[i]){
            m.push_back({s1[i],s2[i]});
        }
    }
    if(m.size()!=2) return false;
    return (m[0].first==m[1].second && m[1].first==m[0].second);
}
class Solution {
public:
    int countPairs(vector<int>& n) {
        int c=0;
        for(int i=0;i<n.size()-1;i++){
            for(int j=i+1;j<n.size();j++){
                if(n[i]==n[j] || fun(n[i],n[j])) c++;
            }
        }
        return c;
    }
};