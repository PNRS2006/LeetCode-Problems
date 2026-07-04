class Solution {
public:
    int countMatches(vector<vector<string>>& items, string key, string value) {
        int r,c=0;
        if(key == "type") r=0;
        else if(key == "color") r=1;
        else r=2;
        for(int i=0;i<items.size();i++)
        {
            if(items[i][r]==value) c++;
        }
        return c;
    }
};