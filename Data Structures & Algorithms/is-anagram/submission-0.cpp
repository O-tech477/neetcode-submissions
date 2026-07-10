class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        if(s.size() != t.size())
        {
            return false;
        }
        else
        {
            unordered_map <char, int> hashMap1;
            unordered_map <char, int> hashMap2;

            for(int i = 0; i < s.size(); i++)
            {
                if(hashMap1.find(s[i]) != hashMap1.end())
                {
                    hashMap1[s[i]]++;
                }
                else
                {
                    hashMap1.insert({s[i], 1});
                }
            }

            for(int i = 0; i < t.size(); i++)
            {
                if(hashMap2.find(t[i]) != hashMap2.end())
                {
                    hashMap2[t[i]]++;
                }
                else
                {
                    hashMap2.insert({t[i], 1});
                }
            }

            for(int i = 0; i < s.size(); i++)
            {
                if(hashMap2.find(s[i]) == hashMap2.end()) 
                {
                    return false;
                }
                if(hashMap1[s[i]] != hashMap2[s[i]])
                {
                    return false;

                }
            }

        }
        return true;
    };
};