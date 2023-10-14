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

//other
	
int findFloor(int arr[], int n, int x) {
	int low = 0, high = n - 1;
	int ans = -1;

	while (low <= high) {
		int mid = (low + high) / 2;
		// maybe an answer
		if (arr[mid] <= x) {
			ans = arr[mid];
			//look for smaller index on the left
			low = mid + 1;
		}
		else {
			high = mid - 1; // look on the right
		}
	}
	return ans;
}

int findCeil(int arr[], int n, int x) {
	int low = 0, high = n - 1;
	int ans = -1;

	while (low <= high) {
		int mid = (low + high) / 2;
		// maybe an answer
		if (arr[mid] >= x) {
			ans = arr[mid];
			//look for smaller index on the left
			high = mid - 1;
		}
		else {
			low = mid + 1; // look on the right
		}
	}
	return ans;
}

pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
	int f = findFloor(arr, n, x);
	int c = findCeil(arr, n, x);
	return make_pair(f, c);
}
}
