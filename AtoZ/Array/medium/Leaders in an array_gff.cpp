//{ Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
    

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int v[], int n){
      vector<int> a;
        for(int i=n-1 ; i>=0 ;i--){
            if(!a.size()) a.push_back(v[n-1]);
            else{
                if(v[i]>=a[a.size()-1]){
                    a.push_back(v[i]);
                }
            }
        }
        reverse(a.begin(),a.end());
        return a;
    }

    //other
    vector<int> ans;

    int maxi=-1;

    for(int i=nums.size()-1;i>=0;i--)
     {
        if(nums[i]>maxi) 
        {
            ans.push_back(nums[i]),maxi=nums[i];
        }
     }

    return ans;
};

//{ Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}

// } Driver Code Ends
