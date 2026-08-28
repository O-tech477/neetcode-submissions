class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left_pointer = 0;
        int right_pointer = heights.size()-1;

        int max_water = 0;
        while(left_pointer < right_pointer)
        {
            int height_possible = (heights[left_pointer] < heights[right_pointer]) ? heights[left_pointer] : heights[right_pointer];

            int vol_of_water = height_possible*(right_pointer-left_pointer);
            if(vol_of_water > max_water) max_water = vol_of_water;
            if(heights[left_pointer] < heights[right_pointer])
            {
                left_pointer++;
            }
            else{
                right_pointer--;
            }
        }

        return max_water;
    }
};
