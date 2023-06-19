//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// } Driver Code Ends
class Solution
{
    public:
    int part (int arr[], int l, int h)
    {
       int piv = arr[h];
       int i = l-1;
       for(int j=l;j<=h-1;j++)
       {
           if(arr[j]<=piv)
           {
                i++;
                swap(arr[i],arr[j]);
           }
       }
       swap(arr[i+1],arr[h]);
       return i+1;
    }
    
     public:
    void quickSort(int arr[], int l, int h)
    {
        if(l<h)
        {
            int pi = part(arr,l,h);
            quickSort(arr,l,pi-1);
            quickSort(arr,pi+1,h);
        }
        
    }
};


//{ Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      Solution ob;
    ob.quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends