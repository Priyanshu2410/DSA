#include <iostream>
#include<algorithm>
#include<string>
using namespace std;


 
int main() {
	int test;
	cin>>test;
	while(test--){
	     int n;
    cin>>n;
    string s,r;
    cin>>s>>r;
    sort(s.begin(),s.end());
    sort(r.begin(),r.end());
    if (s==r) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
	}
	return 0;
}

