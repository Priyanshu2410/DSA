// Find Number of Numbers

//{ Driver Code Starts
#include<iostream>
using namespace std;
int num(int a[], int n, int k);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
		{
			cin>>a[i];
		}
		int k;
		cin>>k;
		cout<<num(a,n,k)<<endl;
	}
}
// } Driver Code Ends


/*Complete the function given below*/
int num(int a[], int n, int k)
{
     

   int count=0;
   int num;
   for(int i=0;i<n;i++)
   {
       while(a[i])
       {
           if(a[i]%10==k)
           count++;
           
           a[i]=a[i]/10;
       }
   }
  return count;

    //add code here.

}