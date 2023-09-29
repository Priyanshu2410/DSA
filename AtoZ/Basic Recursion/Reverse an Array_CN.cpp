int i=0;

vector<int> reverseArray(int n, vector<int> &nums)
{

  if (i< n/2){

    swap(nums[i],nums[n-i-1]);

    i++;

    reverseArray(n, nums);

  }

  return nums;

}