class Solution {
public:
    bool isPalindrome(string s) {

        int length = s.length();
        int l = 0;
        int r = length-1;

        while(l < length/2 && r >= length/2)
        {
            if(!isalnum(s[l]))
            {
                l++;
                continue;
            }
            if(!isalnum(s[r]))
            {
                r--;
                continue;
            }

            if(s[r] >= 'A' && s[r] <= 'Z')
            {
                s[r] = s[r] - 'A' + 'a';
            }

            if(s[l] >= 'A' && s[l] <= 'Z')
            {
                s[l] = s[l] - 'A' + 'a';
            }

            if(s[r] != s[l])
            {
                return false;
            }
            else
            {
                r--;
                l++;
            }
        }
        
        return true;

    }
};
