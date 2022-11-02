//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    void sortIt(long long arr[], long long n)
    {
        //code here.
          vector<int> v;

    sort(arr,arr+n);
    int i=0;
    for(; i<n; i++)
    {
        if(arr[i]%2!=0)
        {
            v.push_back(arr[i]);
        }
    }

     reverse(v.begin(),v.end());
      for(int i=0; i<n; i++)
      {
       if(arr[i]%2==0)
       {
          v.push_back(arr[i]);
       }
   }
   for(int i=0; i<v.size(); i++){

    arr[i]=v[i];

   }
    }
};

//{ Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long arr[n];

        for (int i = 0; i < n; i++) 
            cin >> arr[i];
        
        Solution ob;
        ob.sortIt(arr, n);

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends