//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	

	vector<int> barcketNumbers(string S)
	{
	     vector<int>vec;
         stack<int>st;

     int cnt=0;

     for(int i=0;i<S.size();i++){

         if(S[i]=='(')
         {

             cnt++;

             st.push(cnt);

             vec.push_back(cnt);

         }

         else if(S[i]==')')
         {

             vec.push_back(st.top());

             st.pop();

         }

     }

     return vec;
	}
};

//{ Driver Code Starts.

int main() 
{
   	
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	string tc;
   	getline(cin, tc);
   	t = stoi(tc);
   	while(t--)
   	{
   		string s;
   		getline(cin, s);

   	    Solution ob;

   		vector<int> ans = ob.barcketNumbers(s);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}
// } Driver Code Ends