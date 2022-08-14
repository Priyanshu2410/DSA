// Pattern of Strings


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	vector<string> pattern(string S)
	{
	    vector<string> str;
	    string str2 = "";
	    int n=S.size();
	    for(int i = 0; i< n; i++){
	        for(int j = 0; j <n - i; j++)
	        {
	            char a = S[j];
	            str2.push_back(a);
	        }
	    str.push_back(str2);
	    str2.clear();
	    }
	    
	    return str;
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

   		vector<string> ans = ob.pattern(s);

   		for(int i = 0; i < ans.size(); i++)
   			cout << ans[i] << "\n";
   		
   	}

    return 0;
}
// } Driver Code Ends