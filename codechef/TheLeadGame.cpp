#include <iostream>
using namespace std;

int main() {
	// your code goes here
	 int n;
    cin>>n;
    int P1[n],P2[n],max=0,diff=0,p=0,SUM1=0,SUM2=0;
    for(int a=0;a<n;a++)
    {
        cin>>P1[a]>>P2[a];
        SUM1=SUM1+P1[a];
        SUM2=SUM2+P2[a];
        if(SUM1>SUM2)
        {
            diff=SUM1-SUM2;
            if(diff>max){max=diff;p=1;}

        }
        else {diff=SUM2-SUM1;
            if(diff>max){max=diff;p=2;}}
    }
    cout<<p<<" "<<max<<endl;
	return 0;
}
