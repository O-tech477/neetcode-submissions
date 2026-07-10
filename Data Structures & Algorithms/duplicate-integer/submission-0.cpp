class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> hashMap;
        for(int i = 0; i < nums.size(); i++)
        {
            if(hashMap.find(nums[i]) == hashMap.end())
            {
                hashMap.insert({nums[i], i});
            }
            else
            {
                return true;
            }
        }
        return false;

    }
};