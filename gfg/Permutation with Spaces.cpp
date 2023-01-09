//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
vector<string>ans;
    vector<string> permutation(string s){
        // Code Here
        int n = s.size();
        solve(0,n,"",s);
        return ans; 
    }
    void solve(int i,int n,string op,string s){
        if(i>=n){
            op.pop_back();
            ans.push_back(op);
            return ;
        }
        for(int st=i;st<n;st++){
            op+=s[st];
            op+=' ';
            solve(st+1,n,op,s);
            op.pop_back();
        }
    }
};

//{ Driver Code Starts.

int  main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        vector<string> ans;
        Solution obj;
        ans = obj.permutation(S);
        for(int i=0;i<ans.size();i++){
            cout<<"("<<ans[i]<<")";
        }
        cout << endl;
    }
}

// } Driver Code Ends