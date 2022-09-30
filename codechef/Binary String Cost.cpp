#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--)
	{
	    int n,x,y;
	    cin>>n>>x>>y;
	    string s;
	    cin>>s;
	    int m=s.size();
	    int d=0,d1=0,d2=0;
	    for (int i=0;i<m;i++)
	    {
	        if (s[i]=='1') d++;
	        if (s[i]=='0') d1++;
	        if (d>0&&d1>0) break;
	    }
	    if (d==0||d1==0) cout<<0<<endl;
	    else if (d!=0&&d1!=0)
	    {
	        if (x<=y) cout<<x<<endl;
	        else cout<<y<<endl;
	    }
	}
	return 0;
}
