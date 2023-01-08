//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
/*You are required to complete this method */

class Solution
{
    public:
    int josephus(int n, int k)
    {
        if(n==1){

           return 1;

       }

       int res=josephus(n-1,k)+k;

      if(res>n){

          if(res%n==0)
          {
          return n;
          }

          else
          {
              return res%n;
          }

      }

      else
      {
          return res;
      }

    
    }
};



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n,k;
		cin>>n>>k;//taking input n and k
		
		//calling josephus() function
		Solution ob;
		cout<<ob.josephus(n,k)<<endl;
	}
	return 0;
}
// } Driver Code Ends