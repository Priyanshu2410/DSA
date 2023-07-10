#include <bits/stdc++.h> 

 

int firstOccurance(vector<int>& arr, int n, int k){

 

    int start = 0;

    int end = n-1;

    int ans = -1;

    int mid = (start+end)/2;
   

    while(start<=end){

        if(arr[mid] == k){

            ans = mid;

            end = mid-1;

        }

 

        else if(k<arr[mid]){

            end = mid - 1;

        }

 

        else if(k>arr[mid]){

            start = mid + 1;

        }

        mid = (start+end)/2;


    }

    return ans;

}

 

int lastOccurance(vector<int>& arr, int n, int k){

 

    int start = 0;

    int end = n-1;

    int ans = -1;

    int mid = (start+end)/2;


    while(start<=end){

        if(arr[mid] == k){

            start = mid+1;

            ans = mid;

        }

        else if(k<arr[mid]){

            end = mid - 1;

        }

        else if(k>arr[mid]){

            start = mid + 1;

        }

        mid = (start+end)/2;

    }

    return ans;

}

 

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)

{
    pair<int, int> p;
    p.first = firstOccurance(arr,n,k);
    p.second = lastOccurance(arr,n,k);
    return p;

}

