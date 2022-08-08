
// Given a 2-d array of integers having N*N elements, print the transpose of the array.

#include<bits/stdc++.h>
using namespace std;
#define M 101

vector<vector<int>> transpose(int a[][M], int n);

int main()
{
    int t;
    cin>>t;
    int a[M][M];
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
        vector<vector<int>> b;
        b = transpose(a, n);
        for(int i=0;i < n;i++)
        {
            for(int j=0;j<n;j++){
                cout << b[i][j] << " ";
            }
        }
        cout<<endl;
    }
}



// } Driver Code Ends


vector<vector<int>> transpose(int a[][M], int n)
{
    // Code here
     vector<vector<int>>ans;
    vector<int>nums;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            nums.push_back(a[j][i]);
        }
        ans.push_back(nums);
        nums.clear();
    }
 return ans;
}
