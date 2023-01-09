//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  int f(long long int ans, long long int n , int k)
    {
        if( n == 1)
        {
            return ans;
        }
        if( n % 2 == 0)
        {
            ans = ans;
        }
        if( n % 2!= 0)
        {
            ans = ans - k;
        }
        k = k*2;
        f(ans,n/2,k);
    }

  public:

    long long int nthPosition(long long int n){
        long long int ans = n;
        int k = 1;
        return f(ans ,n , k);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout<<ob.nthPosition(n)<<endl;
    }
    return 0;
}

// } Driver Code Ends