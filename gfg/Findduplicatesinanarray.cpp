//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        
        
       vector<int>v;
       vector<int>a;
       set<int>s;
       sort(arr,arr+n);
       for(int i=0;i<n-1;i++)
       {
           if(arr[i]==arr[i+1])
           {
               v.push_back(arr[i]);
           }
       }
       if(v.size()==0)
           v.push_back(-1);
       for(int i=0;i<v.size();i++)
           s.insert(v[i]);
               
       for(auto x:s)
           a.push_back(x);
             
       return a;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends