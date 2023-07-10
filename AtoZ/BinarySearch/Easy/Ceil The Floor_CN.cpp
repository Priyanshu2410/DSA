pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
	  sort(arr,arr+n);

  int low=0,high=n-1,mid=0;

  pair<int,int>ans={-1,-1};

  while(low<=high)

  {

    mid=(low+high)/2;

    if(arr[mid]==x)

    {

      ans={arr[mid],arr[mid]};

      return ans;

    }

    if(arr[mid]<=x)

      {

        ans.first=arr[mid];

        low=mid+1;

      } 

    else if (arr[mid] >x) 

      {

        ans.second = arr[mid];

        high = mid - 1;

      }

  }

  return ans;
}
