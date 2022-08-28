// <<<<<<< HEAD
// Row with max 1s

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
// 	int row=0;
    int row = -1;
    int i=0;
    int j= m-1;
    
    while(i<n && j>=0){
        
        if(arr[i][j]  == 1){
            row=i;
            j--;
        }
        else{
            i++;
        }
    }
    return row;

	}

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}

// =======
// Row with max 1s

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
// 	int row=0;
    int row = -1;
    int i=0;
    int j= m-1;
    
    while(i<n && j>=0){
        
        if(arr[i][j]  == 1){
            row=i;
            j--;
        }
        else{
            i++;
        }
    }
    return row;

	}

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}

// >>>>>>> b090206981fd9491eb7efe5265720ceeaab1557e
// } Driver Code Ends