#include<iostream>
using namespace std;

void selectionsort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int minIndex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minIndex])
            {
                minIndex=j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
}

int main()
{
    int n;
    cout<<"Enter your size"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"before sort"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    selectionsort(arr,n);
    cout<<"after sort"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";  
    }
    return 0;
    
}