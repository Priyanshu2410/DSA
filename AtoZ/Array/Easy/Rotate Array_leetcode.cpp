class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> temp(nums.size());
        for(int i=0;i<n;i++){
            temp[(i+k)%n]=nums[i];
        }
        nums=temp;
    }

    // left rotate
    #include <bits/stdc++.h> 
    vector<int> rotateArray(vector<int>& arr, int n) {
    // Write your code here.
   int temp = arr[0];
   for(int i=1;i<n;i++)
   {
       arr[i-1]=arr[i];
   }
   arr[n-1]=temp;
   return arr;
    }

};
