#include <iostream>
using namespace std;

int main() {
    int t ;
    cin >> t ;
    while(t--)
    {
        string a;
        int p=0,q=0,sum=0,n;
        cin >> n ;
        cin >> a ;
        for(int i=0;i<n;i++)
        {
            if(a[i]=='1')
            p++;
            if(a[i]=='0')
            q++;
        }
        if(p>q)
        sum=q+q+1 ;
        if(p==q)
        sum=p+q ;
        if(p<q)
        sum=p+p+1 ;
        cout << sum << endl ;
    }
	return 0;
}
