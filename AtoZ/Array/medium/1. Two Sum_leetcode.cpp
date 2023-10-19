class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int,int>>vp;
        for(int i=0; i<n; i++){
            vp.push_back({nums[i],i});
        }
        sort(vp.begin(), vp.end());
        int i = 0, j = n-1;
        while(i < j){
            int sum = vp[i].first + vp[j].first;
            if(sum == target) return {vp[i].second,vp[j].second};
            if(sum < target) i++;
            else j--;
        }
        return {};

        /////
         sort(arr.begin(), arr.end());
    int left = 0, right = n - 1;
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) {
            return "YES";
        }
        else if (sum < target) left++;
        else right--;
    }
    return "NO";
        
    }
};
