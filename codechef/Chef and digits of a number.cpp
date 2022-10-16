#include <iostream>

using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    int count0 = 0,count1 = 0,i=0;
	    while(str[i]!=0)
	    {
	        if(str[i]=='1')
	        {
	            count1++;
	        }
	        else
	        {
	            count0++;
	        }
	        i++;
	    }
	    if(count0==1 || count1==1)
	    {
	        cout<<"Yes"<<endl;
	    }
	    else
	    {
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
