// 976. Largest Perimeter Triangle
// Given an integer array nums, return the largest perimeter of a triangle with a non-zero area, formed from three of these lengths. If it is impossible to form any triangle of a non-zero area, return 0.

class Solution {
public:
    int largestPerimeter(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        int max_peri= 0;
        for(int i=nums.size()-1;i>=2;i--){
            if(nums[i-1]+nums[i-2]>nums[i]){
                max_peri=nums[i]+nums[i-1]+nums[i-2];
                break;
            }
        }
        return max_peri;
    }
};
