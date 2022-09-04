//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    /*You are required to complete this method */
    int remainderWith7(string n)
    {
     //   Your code here
    //     int ans;
    //       int num=stoi(str);
    // //   int num = (int) n;
    //     ans=num%7;
    //   return ans;
      
      int sum=0;
      for(int i=0;i<n.size();i++){
          int digit=n[i]-'0';
          sum=sum*10+digit; 
          sum=sum%7;                  
      }
      return sum;
    }
};

//{ Driver Code Starts.
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
    string n;
    cin>>n;
    Solution ob;
    cout<<ob.remainderWith7(n)<<endl;
    
    }
	return 0;
}
// } Driver Code Ends