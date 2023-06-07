//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
   void fact(vector<long long> &v , long long N,long long ans,long long i)
    {
        ans = ans*i;
        if(ans>N)
        {
            return ;
        }
        
        v.push_back(ans);
        fact(v,N,ans,i+1);
        
    }
    vector<long long> factorialNumbers(long long N)
    {
        vector<long long> v;
        fact(v,N,1,1);
        return v;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin>>N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for(auto num : ans){
            cout<<num<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}
// } Driver Code Ends