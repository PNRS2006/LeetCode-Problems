class Solution {
public:
    int generateKey(int n1, int n2, int n3) {
        string s1 = to_string(n1);
        string s2 = to_string(n2);
        string s3 = to_string(n3);
        s1.insert(0, 4 - s1.size(), '0');
        s2.insert(0, 4 - s2.size(), '0');
        s3.insert(0, 4 - s3.size(), '0');
        string s = "";
        for(int i=0;i<4;i++) s+=min({s1[i],s2[i],s3[i]});
        return stoi(s);
    }
};