//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
long long int maxSum(int arr[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;++i)
			cin>>arr[i];
		cout<<maxSum(arr,n)<<endl;
	}
	return 0;
}



long long int maxSum(int arr[], int n)
{
     sort(arr,arr+n);
    int i , j=n-1;
    long long int sum=0;
    for(i=0;i<n;i++)
    {
        sum+= abs(arr[i]- arr[j]);
        j--;
    }
    return sum;
}