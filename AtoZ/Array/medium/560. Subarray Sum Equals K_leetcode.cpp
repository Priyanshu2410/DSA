class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int n = arr.size();
        map<int,int>mpp;
    int preSum = 0, cnt = 0;

    mpp[0] = 1;
    for (int i = 0; i < n; i++) {
        preSum += arr[i];
        int remove = preSum - k;
        cnt += mpp[remove];
        mpp[preSum] += 1;
    }
    return cnt;
    }

    //other
    int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
    // Write Your Code Here
    int n = arr.size();
    int count =0;
    for(int i=0;i<n;i++)
    {
        int sum =0;
        for(int j=i;j<n;j++)
        {
            sum  += arr[j];
            if(sum==k)
            {
                count++;
            }
        }
        
    }
    return count;
}
};
