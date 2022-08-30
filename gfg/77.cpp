// Count zeros in a sorted matrix

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++

class Solution{
public:
	int countZeros(vector<vector<int>>A)
	{
		//code here
		int i=0;
      int j=0;
      int n=A.size();
      int count=0;
      while(i<n && j<n){
          if (A[i][j]==0){
              count+=1;
              j+=1;
          }
          else{
              j+=1;}
          if (j==n){
              i+=1;
              j=0;
          }
      }
      return count; 
	}
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int>>A(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            for(int j =0;j<n;j++){
                cin>>A[i][j];
            }
        }
        Solution ob;
        cout<<ob.countZeros(A)<<'\n';
    }
    return 0;
}

// } Driver Code Ends