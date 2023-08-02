class Solution {
public:
   
        void GetMax(vector < int > nums, int l, int r, vector < int > & arr) {
  int i, maxi = INT_MIN;
  for (i = l; i <= r; i++)
    maxi = max(maxi, nums[i]);
  arr.push_back(maxi);
}
vector < int > maxSlidingWindow(vector < int > & nums, int k) {
  deque < int > dq;
  vector < int > ans;
  for (int i = 0; i < nums.size(); i++) {
    if (!dq.empty() && dq.front() == i - k) dq.pop_front();

    while (!dq.empty() && nums[dq.back()] < nums[i])
      dq.pop_back();

    dq.push_back(i);
    if (i >= k - 1) ans.push_back(nums[dq.front()]);
  }
  return ans;
    }
};