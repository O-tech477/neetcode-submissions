class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> output;
        vector<int> prefixProd;
        vector<int> suffixProd ;
        int prefix = 1;
        int suffix = 1;

        for(int i = 0; i <= nums.size(); i++)
        {
            if(i != 0)
            {
                prefix *= nums[i-1];
            }
            prefixProd.push_back(prefix);
        }

        for(int i = nums.size()-1; i >= 0; i--)
        {
            if(i!= nums.size()-1)
            {
                suffix *= nums[i+1];
            }
            suffixProd.push_back(suffix);
        }
        
        for(int i = 0; i < suffixProd.size()/2; i ++)
        {
            int temp = suffixProd[i];
            suffixProd[i] = suffixProd[suffixProd.size() -i-1];
            suffixProd[suffixProd.size() -i-1] = temp;
        }

        for(int i = 0; i <nums.size(); i++)
        {
            output.push_back(prefixProd[i]*suffixProd[i]);
        }

        return output;

    }
};
