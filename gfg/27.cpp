// Lower case to upper case


//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;
 
string to_upper(string in);
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		cout << to_upper(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends



string to_upper(string str){
    //code
    int n=str.length();
    int i;
    for(i=0;i<n;i++)
    {
        str[i] = str[i] - 32;
    }
    return str;

}