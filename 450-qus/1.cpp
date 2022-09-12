// Reverse an Array

#include <iostream>
using namespace std;

int main() {
	//code
	long long a;
	cin>>a;
	for(long long t=0;t<a;t++)
	{
    	long long n;
    
        cin>>n;
        long long arr[n];
        for(long long i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        long long arr2[n];
        for(long long i=0;i<n;i++)
        {
            arr2[i]=arr[n-i-1];
        }
        for(long long i=0;i<n;i++)
        {
            cout<<arr2[i]<<" ";
        }
        cout<<endl;
}
	return 0;
}

//
