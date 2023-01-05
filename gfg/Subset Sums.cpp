//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
   void func(int sum,int index,vector<int>&arr,vector<int>&v,int n)
 {
     if(index==n)
     {
         v.push_back(sum);
         return;
     }
     func(sum+arr[index],index+1,arr,v,n);
     func(sum,index+1,arr,v,n);
 }
    vector<int> subsetSums(vector<int> arr, int n)
    {
       
       int sum=0;
       int index=0;
       vector<int>v;
       func(sum,index,arr,v,n);
       return v;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends