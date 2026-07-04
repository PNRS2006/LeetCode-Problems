class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>v;
        string s = "";
        for(int i : nums) {
            string t = "";
            while(i>0){
                t+=(i%10)+'0';
                i/=10;
            }
            reverse(t.begin(),t.end());
            s+=t;
        }
        for(int i=0;i<s.size();i++) v.push_back(s[i]-'0');
        return v;
    }
};