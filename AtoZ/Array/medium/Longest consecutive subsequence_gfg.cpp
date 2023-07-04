//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
     int findLongestConseqSubseq(int a[], int n)
    {
        set<int> ss;
        for (int i=0; i < n; i++)
            ss.insert(a[i]);

        int ans = 0, curr = 0;
    
        for (auto i : ss)
        {
            if (ss.count(i - 1))
            {
                curr++;
            }
    
            else
                curr = 1;
    
            ans = max(curr, ans);
        }
            
        return ans;
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends