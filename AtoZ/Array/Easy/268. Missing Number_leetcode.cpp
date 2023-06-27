class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n  = nums.size();
        int sum_n=(n*(n+1))/2;
     int sum_array=0;
        for(int i=0;i<n;i++)
        {
            sum_array=sum_array+nums[i];
        }
        return sum_n-sum_array;
    }
    
};