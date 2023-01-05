//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> helper(int N,vector<int>&v)
    {
        if(v.back()==1){
            return v;
        }
        else{
            if(v.back()%2==0){
                v.push_back(pow(v.back(),0.5));
                return helper(N--,v);
            }
            else{
                v.push_back(pow(v.back(),1.5));
                return   helper(N--,v);
            }
        }
        
    }

    vector<int> jugglerSequence(int N)
    {
        vector<int>v;
        v.push_back(N);
        return helper(N,v);
        //return v;
       
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
        vector<int> ans = ob.jugglerSequence(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends