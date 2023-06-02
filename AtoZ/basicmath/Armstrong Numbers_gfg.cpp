//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int num=n;
        int sum =0;
        while(n)
        {
            int no=n%10;
            sum = sum+ (no*no*no);
            n=n/10;
        }
        if(num==sum)
        {
            cout<<"Yes";
        }
        else{
            cout<<"No";
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends