class Solution {
public:
    bool areNumbersAscending(string s) {
        stringstream ss(s);
        string prev = "";
        string pre = "";
        string token;
        vector<int>v;
        while(getline(ss,token,' ')){
            if(token[0]-'0'>=0 && token[0]-'0'<=9){
                if(pre=="") {
                    pre = token;
                }
                else{
                    prev = pre;
                    pre = token;
                    cout << prev << " " << pre << endl;
                    if(stoi(prev)>=stoi(pre)) return 0;
                }
            }
        }
        return 1;
    }
};