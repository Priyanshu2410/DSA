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
     void merge(int arr[], int l, int m, int r) {
    vector<int> A;
        int i=l;
        int j=m+1;
        while(i<=m&&j<=r){
            if(arr[i]<=arr[j]) A.push_back(arr[i++]);
            else A.push_back(arr[j++]);

        }
        while(i<=m) A.push_back(arr[i++]);
        while(j<=r) A.push_back(arr[j++]);
        for(int i=l;i<=r;++i) arr[i]=A[i-l];
}
    public:
     void mergeSort(int arr[], int l, int r)
    {
        if(l>=r) return;
        int m=(l+r)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends