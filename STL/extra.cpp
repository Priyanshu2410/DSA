#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    // sort(arr,arr+n);  sort in assading order
    sort(arr,arr+n,greater<int>() );
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}