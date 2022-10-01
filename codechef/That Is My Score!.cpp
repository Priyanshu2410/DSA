#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[8]={0};
	    int index,num,sum=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>index>>num;
	        if(index>8)
	         continue;
	        else
	          a[index-1]=max(a[index-1],num);
	    }
	    for(auto it:a)
	     sum+=it;
	    
	    cout<<sum<<endl;
	}
	return 0;
}
