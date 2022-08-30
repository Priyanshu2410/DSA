// Red OR Green

//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
       int RedOrGreen(int n,string s) {
           int a=0,b=0;
          
          for(int i=0;i<n;i++)
          {
              if(s[i]=='R')
              {
                  a++;
              }
              else if(s[i]=='G')
              {
                 b++;
              }
          }
          if(a<=b)
          {
              return a;
          }
          else
          {
              return b;
          }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        string S;
        cin >> S;
        Solution ob;
        cout << ob.RedOrGreen(N,S) << endl;
    }
    return 0;
}
// } Driver Code Ends