//Find Index


//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h> 
#include <vector> 
using namespace std; 

// } Driver Code Ends
class Solution
{
  public:
    vector<int> findIndex(int a[], int n, int key)
    {
        vector<int>ans;
        int end=-1,start=-1;
        for(int i=0;i<n;i++)
        {
            if(key==a[i])
            {
                start=i;
                break;
            }
        }
        for(int j=n-1;j>=0;j--)
        {
            if(key==a[j])
            {
                end=j;
                break;
            }
        }
        ans.push_back(start);
    ans.push_back(end);
    return ans;
    }
    
  
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        vector<int> res;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int key;
        cin>>key;
        Solution ob;
        res=ob.findIndex(arr, n, key);
        for (int i = 0; i < res.size(); i++) 
        cout << res[i] << " ";
        cout << "\n";
    }
    
    return 0;
}

// } Driver Code Ends