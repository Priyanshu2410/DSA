//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void solve1(vector<int>&ans,int n1)
{
    if(n1<=0)
    {
        ans.push_back(n1);
        return;
    }
    ans.push_back(n1);
    solve1(ans,n1-5);
}

void solve2(vector<int>&ans,int n,int N,int p)
{
    if(n>=N)
    {
        ans.push_back(n);
        return;
    }
    if(p==0)
    {
        ans.push_back(n);
    }
    solve2(ans,n+5,N,0);
}
    vector<int> pattern(int N)
    {
        vector<int>ans;
        solve1(ans,N);
        int n1=ans[ans.size()-1],p=1;
        solve2(ans,n1,N,p);
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.pattern(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends