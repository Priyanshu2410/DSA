//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    int remove_duplicate(int a[],int n){
          vector <int> arr;
        for (int i=0; i<n; ++i){
            if (a[i]==a[i+1]){
                arr.push_back(a[i]);
                while(a[i]==a[i+1]){
                    ++i;
                }
            }
            else{
                arr.push_back(a[i]);
            }
        }
        for(auto it:arr){
            cout<< it<<" ";
        }
        return 0;
    
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
    Solution ob;
    int n = ob.remove_duplicate(a,N);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}
// } Driver Code Ends