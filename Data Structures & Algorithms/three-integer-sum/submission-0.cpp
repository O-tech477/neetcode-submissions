class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>main_output;
        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size(); i++)
        {
            if(i > 0 && (nums[i] == nums[i-1]))continue;
            int left_pointer = i+1;
            int right_pointer = (nums.size()-1);
            int sub_sequence_len = (right_pointer-left_pointer);

            int required_sum = -nums[i];
            while(left_pointer < right_pointer)
            {
                if((nums[left_pointer] + nums[right_pointer]) > required_sum)
                {
                    right_pointer--;
                }
                else if((nums[left_pointer]+nums[right_pointer]) < required_sum)
                {
                    left_pointer++;
                }
                else
                {
                    vector<int> one_set;
                    one_set.push_back(nums[i]);
                    one_set.push_back(nums[left_pointer]);
                    one_set.push_back(nums[right_pointer]);
                    main_output.push_back(one_set);

                    left_pointer++;
                    right_pointer--;
                    
                    while((left_pointer < right_pointer)&&(nums[left_pointer] == nums[left_pointer-1]))
                    {
                        left_pointer++;
                    }

                    while((left_pointer < right_pointer)&&(nums[right_pointer] == nums[right_pointer+1]))
                    {
                        right_pointer--;
                    }
                }
            }
        }
        return main_output;
    }
};
