class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string longestPrefix = strs[0];
        bool c = false;
        int j = 0;
        for(int i = 1; i < strs.size(); i ++)
        {
            j = 0;
            while(longestPrefix[j] == strs[i][j] && j < longestPrefix.size() && j < strs[i].size())
            {
                j++;
                c = true;
            }
            longestPrefix = longestPrefix.substr(0, j);
            if(longestPrefix == ""){
                break;
            }

            
        }

        return longestPrefix;
    }
};