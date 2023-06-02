//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        vector<long long>ans;
     
        ans.push_back((A*B)/__gcd(A,B));
        ans.push_back(__gcd(A,B));
        
        return ans;
       
    }
//   int a, int b, vector<long long> ans)
// {
//     if (b == 0)
//     return a; 
//     else 
//     return gcd(b, a % b);   
// } void gcd(
     
};  

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends