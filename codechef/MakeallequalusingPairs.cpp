#include <iostream>
using namespace std;

int main() {
	// your code goes here
		int t; cin>>t;
	while(t--)
	{
	    int n,i,j ; cin>>n;
	    int a[n];
	    int f[n]={0};
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	        
	        
	    }
	  
	       for(i=0;i<n;i++)
	   {    
	     	       for(j=0;j<n;j++)
     {
         if( i != j)
         {
             if(a[i] != a[j])
             {
                 f[i]++;
             }
         }
     }
	}
	int min = f[0];
	 for(i=0;i<n;i++)
	 {
	     if(min>f[i])
	     {
	         min = f[i];
	     }
	 }
	 cout<<min<<endl;
	}
	return 0;
}
