//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long reversedBits(long long X)
    {
        // code here
        long long num = 0;
        int i=0;
        while(X){
            int rem = X%2;
            if(rem==1)
            num += pow(2,31-i);
            X /=2;
            i++;
        }
        
        return num;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.reversedBits(X) << endl;
    }
    return 0;
}
// } Driver Code Ends