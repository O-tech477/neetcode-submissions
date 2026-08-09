class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> frequency_table;
        map<int,  vector<int>> sorted_table;
        vector<int> answer;


        for(int i  = 0; i < nums.size(); i++)
        {
            if(frequency_table.find(nums[i]) != frequency_table.end())
            {
                frequency_table[nums[i]] ++;
            }
            else
            {
                frequency_table[nums[i]] = 1;
            }
        }

    
        for(auto &pair: frequency_table)
        {
            sorted_table[pair.second].push_back(pair.first);
        }


        for(auto it  = sorted_table.rbegin(); it !=  sorted_table.rend() && answer.size() < k;   ++it)
        {
            vector<int> value = it->second;
            for(int j = 0; j < value.size(); j++)
            {
                if (answer.size() == k){
                    break;
                }
                answer.push_back(value[j]);
            }
        }


        return answer;
    }
};
