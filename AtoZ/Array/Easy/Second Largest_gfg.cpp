//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    sort(arr,arr+n);
	     for(int i=n-1;i>=0;i--)
       {
           if(arr[i]!=arr[n-1])
           return arr[i];
         }
   return -1;
	}

	vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
        sort(a.begin(), a.end());

    vector<int> ans;

    ans.push_back(a[n-2]);

    ans.push_back(a[1]);

    return ans;
}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
