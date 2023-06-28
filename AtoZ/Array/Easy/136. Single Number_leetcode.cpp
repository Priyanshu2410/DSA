class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int xoar = 0;
        for(int i=0;i<n;i++)
        {
            xoar = xoar ^ nums[i];
        }
        return xoar;
    }
};