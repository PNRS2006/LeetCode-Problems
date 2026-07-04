class Solution {
public:
    int maxScore(vector<int>& c, int k) {
        int l_s=0 , r_s=0 , r=c.size()-1 , m_s=0;
        for(int i=0;i<k;i++) l_s+=c[i];
        m_s=l_s;
        cout << l_s << endl;
        for(int i=k-1;i>=0;i--){
            l_s -= c[i];
            r_s += c[r--];
            m_s = max(m_s,l_s+r_s);
        }
        return m_s;
    }
};