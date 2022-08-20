// Balanced Array

//{ Driver Code Starts
#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int minValueToBalance(int a[], int n)
    {
       //code here.
        int sum1 = 0;
        int sum2 = 0;
   for(int i=0;i<n;i++){
       if(i<n/2){
           sum1+=a[i];
       }else{
           sum2+=a[i];
       }
   }
        return abs(sum1-sum2);
   
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
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;	
		cout<<ob.minValueToBalance(a,n)<<endl;
	}
	return 0;
}
// } Driver Code Ends