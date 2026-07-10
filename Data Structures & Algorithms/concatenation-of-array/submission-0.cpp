class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> newArray;
        int len = nums.size();
        for(int i = 0; i < 2*len; i++)
        {
            if(i < len)
            {
                newArray.push_back(nums[i]);
            }
            else{
                newArray.push_back(nums[i-len]);
            }
        }
        return newArray;
    }
};