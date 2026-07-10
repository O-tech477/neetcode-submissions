class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashMap;
        vector<int> ans;
        for(int i = 0; i < nums.size(); i ++)
        {
                if(hashMap.find(target-nums[i]) != hashMap.end())
                {
                    hashMap[target-nums[i]] = i;
                }
                else
                {
                    hashMap.insert({target-nums[i], i });
                }
        }

        for(int i = 0; i < nums.size(); i ++)
        {
            if(hashMap.find(nums[i]) != hashMap.end() && i != hashMap[nums[i]])
            {
                ans.push_back(i);
                ans.push_back(hashMap[nums[i]]);
                return ans;
            }
        }
    }
};
