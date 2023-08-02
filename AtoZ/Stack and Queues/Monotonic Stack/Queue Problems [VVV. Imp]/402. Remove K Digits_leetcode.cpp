 class Solution {
public:
    string removeKdigits(string num, int k) {
         int n=num.size();
    if(k>=n) return "0";
    string ans="";
    for(int nums:num)
    {
        while(ans.size() && k>0 && ans.back()>nums)
        {
            ans.pop_back();
            k--;
        }
        if(ans.size() || nums!='0') ans.push_back(nums);
    }

    while(ans.size() && k--) ans.pop_back();
    return ans.size()?ans:"0"; 
    }
};