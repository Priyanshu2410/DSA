#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
 for(int i=0;i<t;i++){
     
     int x,s=0,k=0;
     cin>>x;
     for(int j=0;j<x;j++)
     {
     string str;
     cin>>str;
     if(str[0]=='S')
     s++;
     else
     if(str[0]=='L')
     k++;
     }
     cout<<s<<" "<<k<<endl;
 }
	return 0;
}
